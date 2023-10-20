#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{

public:
	Ice();
	Ice(Ice &copy);
	Ice& operator=(const Ice &copy);
	virtual ~Ice();

	AMateria* clone() const;
};

#endif