#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
	public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine &copy);
	virtual ~TacticalMarine();

	TacticalMarine	&operator=(const TacticalMarine&);

	virtual ISpaceMarine	*clone() const;
	virtual void		battleCry() const;
	virtual void		rangedAttack() const;
	virtual void		meleeAttack() const;
};

#endif
