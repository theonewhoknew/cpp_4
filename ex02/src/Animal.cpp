#include "../inc/Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "Random animal appeared!" << std::endl;
}

Animal::Animal(Animal &copy)
{	
	std::cout << "Animal copy constructor called" << std::endl;
	_type = copy._type;
}

Animal& Animal::operator=(const Animal &copy)
{	
	std::cout << "Animal copy assignment operator called" << std::endl;
	_type = copy._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal flew!" << std::endl;
}

std::string Animal::getType() const
{
	return (_type);
}

void Animal::setType(std::string type)
{
	_type = type;
}

void Animal::makeSound() const
{
	std::cout << "[random animal sound]" << std::endl;
}
