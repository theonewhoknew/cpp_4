#include "../inc/Cure.hpp"
#include "../inc/AMateria.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{
	//std::cout << "Cure created!" << std::endl;
}

Cure::Cure(Cure &copy) : AMateria("cure")
{	
	//std::cout << "Cure copy constructor called" << std::endl;
	_type = copy._type;
}

Cure& Cure::operator=(const Cure &copy)
{	
	//std::cout << "Cure copy assignment operator called" << std::endl;
	_type = copy._type;
	return (*this);
}

Cure::~Cure()
{
	//std::cout << "Cure destroyed!" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure);
}
