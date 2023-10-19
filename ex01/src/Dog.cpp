#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog appeared!" << std::endl;
	_brain = new Brain;
	setType("Dog");
}

Dog::~Dog()
{
	std::cout << "Dog flew" << std::endl;
	delete _brain;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof!" << std::endl;
}

