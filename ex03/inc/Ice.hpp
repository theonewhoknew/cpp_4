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
	Ice& operator=(const Ice &instance);
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif