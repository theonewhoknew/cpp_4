#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{

public:
	Cure();
	Cure(Cure &copy);
	Cure& operator=(const Cure &instance);
	~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif