#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
	Character(std::string const &name);
	Character(const Character &copy);
	virtual ~Character();

	Character	&operator=(const Character&);

	virtual std::string const	&getName() const;
	virtual void			equip(AMateria *m);
	virtual void			unequip(int idx);
	virtual void			use(int idx, ICharacter &target);

	//test fct
	void	display() const;

	private:
	std::string	_name;
	AMateria	*_materia[4];
	int		_nbmat;
};

#endif
