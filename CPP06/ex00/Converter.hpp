#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <limits>
# include <cmath>
# include <sstream>

class Converter
{
	public:
	Converter();
	Converter(std::string str);
	Converter(const Converter &copy);
	~Converter();

	Converter	&operator=(const Converter&);

	// Setters
	void		setFlag(int index, std::string flag);

	// Getters
	std::string	getFlag(int index) const;
	char		getChar() const;
	int		getInt() const;
	float		getFloat() const;
	double		getDouble() const;

	int		isChar(std::string str) const;
	int		isInt(std::string str) const;
	int		isFloat(std::string str) const;
	int		isDouble(std::string str) const;
	int		isDot() const;

	void		convert();

	private:
	std::string		_str;
	char			_valc;
	int			_vali;
	float			_valf;
	double			_vald;
	std::string		_flag[4];
};

std::ostream	&operator<<(std::ostream &output, const Converter &conv);

#endif
