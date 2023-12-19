#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat appeared!" << std::endl;
	_brain = new Brain;
	setType("Cat");
}

Cat::Cat(Cat &copy) : Animal()
{	
	std::cout << "Cat copy constructor called" << std::endl;
	_type = copy._type;
}

Cat& Cat::operator=(const Cat &copy)
{	
	std::cout << "Cat copy assignment operator called" << std::endl;
	_type = copy._type;
	return (*this);
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

