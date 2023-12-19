#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
	std::cout << "Dog appeared!" << std::endl;
	setType("Dog");
}

Dog::Dog(Dog &copy) : Animal()
{	
	std::cout << "Dog copy constructor called" << std::endl;
	_type = copy._type;
}

Dog& Dog::operator=(const Dog &copy)
{	
	std::cout << "Dog copy assignment operator called" << std::endl;
	_type = copy._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog flew" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof!" << std::endl;
}

