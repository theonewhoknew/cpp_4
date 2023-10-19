#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{

public:
	Cure();
	Cure(Cure &copy);
	Cure& operator=(const Cure &copy);
	virtual ~Cure();

	virtual AMateria* clone() const;
};

#endif