#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{

public:
	Ice();
	Ice(Ice &copy);
	Ice& operator=(const Ice &copy);
	virtual ~Ice();

	virtual AMateria* clone() const;
};

#endif