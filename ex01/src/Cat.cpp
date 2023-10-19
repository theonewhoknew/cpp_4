#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat appeared!" << std::endl;
	_brain = new Brain;
	setType("Cat");
}

Cat::~Cat()
{
	std::cout << "Cat flew" << std::endl;
	delete _brain;
}

void Cat::makeSound() const
{
	std::cout << "Meoooow!" << std::endl;
}

