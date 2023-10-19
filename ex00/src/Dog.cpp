#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog appeared!" << std::endl;
	setType("Dog");
}

Dog::~Dog()
{
	std::cout << "Dog flew" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof!" << std::endl;
}

