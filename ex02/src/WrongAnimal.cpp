#include "../inc/WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	std::cout << "Random wrong animal appeared!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{	
	std::cout << "Base class copy constructor called" << std::endl;
	_type = copy._type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy)
{	
	std::cout << "Base class copy assignment operator called" << std::endl;
	_type = copy._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Random wrong animal flew!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (_type);
}

void WrongAnimal::setType(std::string type)
{
	_type = type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "[random wrong animal sound]" << std::endl;
}
