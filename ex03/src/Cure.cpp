#include "../inc/Cure.hpp"
#include "../inc/AMateria.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{
	//std::cout << "Cure created!" << std::endl;
}

Cure::Cure(Cure &copy) : AMateria("cure")
{	
	(void) copy;
	//std::cout << "Cure copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure &instance)
{	
	(void) instance;
	//std::cout << "Cure copy assignment operator called" << std::endl;
	return (*this);
}

Cure::~Cure()
{
	//std::cout << "Cure destroyed!" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{	
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
