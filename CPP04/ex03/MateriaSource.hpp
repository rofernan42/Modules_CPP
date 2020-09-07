#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	virtual ~MateriaSource();

	MateriaSource	&operator=(const MateriaSource&);

	virtual void		learnMateria(AMateria *m);
	virtual AMateria	*createMateria(std::string const &type);

	//test
	virtual void	display() const;

	private:
	AMateria	*_materia[4];
	int		_nbmat;
};

#endif
