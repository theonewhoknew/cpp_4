#include "../inc/Ice.hpp"
#include "../inc/AMateria.hpp"
#include <iostream>

Ice::Ice()
{
	std::cout << "Ice created!" << std::endl;
	_type = "ice";
}

Ice::Ice(Ice &copy)
{	
	std::cout << "Ice copy constructor called" << std::endl;
	_type = copy._type;
}

Ice& Ice::operator=(const Ice &copy)
{	
	std::cout << "Ice copy assignment operator called" << std::endl;
	_type = copy._type;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destroyed!" << std::endl;
}

AMateria* Ice::clone()
{
	return (new Ice);
}

std::string Ice::getType() const
{
	return (_type);
}

