#include "Squad.hpp"

Squad::Squad():
	m_count(0), m_unit(NULL)
{
}

Squad::Squad(const Squad &copy):
	m_count(copy.m_count)
{
	if (copy.m_unit)
	{
		this->m_unit = new ISpaceMarine*[copy.m_count];
		for (int i = 0; i < copy.m_count; i++)
			this->m_unit[i] = copy.m_unit[i]->clone();
	}
	else
		this->m_unit = NULL;
}

Squad::~Squad()
{
	if (m_unit)
	{
		for (int i = 0; i < m_count; i++)
			delete m_unit[i];
		delete[] m_unit;
	}
}

Squad		&Squad::operator=(const Squad &b)
{
	if (this != &b)
	{
		this->m_count = b.m_count;
		for (int i = 0; i < this->m_count; i++)
			delete this->m_unit[i];
		delete[] this->m_unit;
		m_unit = new ISpaceMarine*[this->m_count];
		for (int i = 0; i < this->m_count; i++)
			this->m_unit[i] = b.m_unit[i]->clone();
	}
	return (*this);
}

int		Squad::getCount() const
{
	return (m_count);
}

ISpaceMarine	*Squad::getUnit(int unit) const
{
	if (m_count > 0 && unit < m_count && unit >= 0)
		return (m_unit[unit]);
	return (NULL);
}

int		Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return (1);
	if (!m_unit)
	{
		m_unit = new ISpaceMarine*[1];
		m_unit[0] = unit;
		m_count = 1;
	}
	else
	{
		for (int i = 0; i < m_count; i++)
		{
			if (m_unit[i] == unit)
				return (1);
		}
		ISpaceMarine **tmp = new ISpaceMarine*[m_count + 1];
		for (int i = 0; i < m_count; i++)
			tmp[i] = m_unit[i];
		delete[] m_unit;
		tmp[m_count] = unit;
		m_unit = tmp;
		m_count++;
	}
	return (0);
}
