#include "../inc/Ice.hpp"
#include "../inc/AMateria.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
	//std::cout << "Ice created!" << std::endl;
}

Ice::Ice(Ice &copy) : AMateria("ice")
{	
	//std::cout << "Ice copy constructor called" << std::endl;
	_type = copy._type;
}

Ice& Ice::operator=(const Ice &copy)
{	
	//std::cout << "Ice copy assignment operator called" << std::endl;
	_type = copy._type;
	return (*this);
}

Ice::~Ice()
{
	//std::cout << "Ice destroyed!" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice);
}
