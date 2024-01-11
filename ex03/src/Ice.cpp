#include "../inc/Ice.hpp"
#include "../inc/AMateria.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
	//std::cout << "Ice created!" << std::endl;
}

Ice::Ice(Ice &copy) : AMateria("ice")
{	
	(void) copy;
	//std::cout << "Ice copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice &instance)
{	
	(void) instance;
	//std::cout << "Ice copy assignment operator called" << std::endl;
	return (*this);
}

Ice::~Ice()
{
	//std::cout << "Ice destroyed!" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{	
	std::cout << "* shoots an ice bot at " << target.getName() << " *" << std::endl;
}
