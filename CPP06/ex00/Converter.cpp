#include "Converter.hpp"

Converter::Converter():
	_str(""), _valc(0), _vali(0), _valf(0), _vald(0)
{
}

Converter::Converter(std::string str):
	_str(str), _valc(0), _vali(0), _valf(0), _vald(0)
{
	Converter::convert();
}

Converter::Converter(const Converter &copy):
	_str(copy._str), _valc(copy._valc), _vali(copy._vali), _valf(copy._valf), _vald(copy._vald)
{
	for (int i = 0; i < 4; i++)
		_flag[i] = copy._flag[i];
}

Converter::~Converter()
{
}

Converter	&Converter::operator=(const Converter &b)
{
	if (this != &b)
	{
		_str = b._str;
		_valc = b._valc;
		_vali = b._vali;
		_valf = b._valf;
		_vald = b._vald;
		for (int i = 0; i < 4; i++)
			_flag[i] = b._flag[i];
	}
	return (*this);
}

// Setters
void		Converter::setFlag(int index, std::string flag)
{
	_flag[index] = flag;
}

// Getters
std::string	Converter::getFlag(int index) const
{
	return (_flag[index]);
}

char		Converter::getChar() const
{
	return (_valc);
}

int		Converter::getInt() const
{
	return (_vali);
}

float		Converter::getFloat() const
{
	return (_valf);
}

double		Converter::getDouble() const
{
	return (_vald);
}

int		Converter::isChar(std::string str) const
{
	if (str.length() != 1 || std::isdigit(str[0]))
		return (0);
	return (1);
}

int		Converter::isInt(std::string str) const
{
	size_t i;

	i = 0;
	if (str[0] == '+' || str[0] == '-')
		i = 1;
	for ( ; i < str.length(); i++)
		if (!std::isdigit(str[i]))
			return (0);
	return (1);
}

int		Converter::isFloat(std::string str) const
{
	size_t	i;
	int	dot;

	i = 0;
	dot = 0;
	if (str[0] == '+' || str[0] == '-')
		i = 1;
	if (str[str.length() - 1] != 'f')
		return (0);
	for ( ; i < str.length() - 1; i++)
	{
		if (!std::isdigit(str[i]))
		{
			if (str[i] == '.')
				dot++;
			else
				return (0);
		}
	}
	if (dot != 1)
		return (0);
	return (1);
}

int		Converter::isDouble(std::string str) const
{
	size_t	i;
	int	dot;

	i = 0;
	dot = 0;
	if (str[0] == '+' || str[0] == '-')
		i = 1;
	for ( ; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
		{
			if (str[i] == '.')
				dot++;
			else
				return (0);
		}
	}
	if (dot != 1)
		return (0);
	return (1);
}

int		Converter::isDot() const
{
	if (Converter::isChar(_str))
		return (1);
	if (Converter::isInt(_str))
		return (1);
	if (Converter::isFloat(_str))
	{
		if (!std::isnan(_valf) && !std::isinf(_valf))
			return (1);
	}
	if (Converter::isDouble(_str))
	{
		if (!std::isnan(_vald) && !std::isinf(_vald))
			return (1);
	}
	return (0);
}

void		Converter::convert()
{
	if (Converter::isChar(_str))
	{
		_valc = _str[0];
		_vali = static_cast<int>(_valc);
		_valf = static_cast<float>(_valc);
		_vald = static_cast<double>(_valc);
	}
	else
	{
		if (Converter::isInt(_str))
		{
			long int tmp;
			tmp = std::atol(_str.c_str());
			if (tmp > std::numeric_limits<int>::max()
			|| tmp < std::numeric_limits<int>::min())
			{
				for (int i = 0; i < 4; i++)
					Converter::setFlag(i, "impossible");
				return ;
			}
			_vali = std::atoi(_str.c_str());
			_valc = static_cast<char>(_vali);
			_valf = static_cast<float>(_vali);
			_vald = static_cast<double>(_vali);
		}
		else if (Converter::isFloat(_str) ||
			_str == "+inff" || _str == "-inff" || _str == "nanf")
		{
			_valf = std::atof(_str.c_str());
			_valc = static_cast<char>(_valf);
			_vali = static_cast<int>(_valf);
			_vald = static_cast<double>(_valf);
		}
		else if (Converter::isDouble(_str) ||
			_str == "+inf" || _str == "-inf" || _str == "nan")
		{
			_vald = std::atof(_str.c_str());
			_valc = static_cast<char>(_vald);
			_vali = static_cast<int>(_vald);
			_valf = static_cast<double>(_vald);
		}
		else
		{
			for (int i = 0; i < 4; i++)
				Converter::setFlag(i, "impossible");
			return ;
		}
		if ((_vali >= 0 &&_vali < 32) || _vali == 127)
			Converter::setFlag(0, "non displayable");
		else if (_vali < 0 || _vali > 127)
			Converter::setFlag(0, "impossible");
		if (_vald > std::numeric_limits<int>::max()
		|| _vald < std::numeric_limits<int>::min()
		|| _str == "nan" || _str == "nanf")
		{
			Converter::setFlag(0, "impossible");
			Converter::setFlag(1, "impossible");
		}
	}
}

std::ostream	&operator<<(std::ostream &output, const Converter &conv)
{
	output << "char: ";
	if (conv.getFlag(0) != "")
		output << conv.getFlag(0) << std::endl;
	else
		output << conv.getChar() << std::endl;
	output << "int: ";
	if (conv.getFlag(1) != "")
		output << conv.getFlag(1) << std::endl;
	else
		output << conv.getInt() << std::endl;

	std::stringstream	ss;
	std::string		str;

	output << "float: ";
	if (conv.getFlag(2) != "")
		output << conv.getFlag(2) << std::endl;
	else
	{
		ss << conv.getFloat();
		str = ss.str();
		if (conv.isDot() && str.find('.') == std::string::npos)
			ss << ".0";
		output << ss.str() << "f" << std::endl;
	}
	ss.str("");
	output << "double: ";
	if (conv.getFlag(3) != "")
		output << conv.getFlag(3) << std::endl;
	else
	{
		ss << conv.getDouble();
		str = ss.str();
		if (conv.isDot() && str.find('.') == std::string::npos)
			ss << ".0";
		output << ss.str() << std::endl;
	}
	return (output);
}
