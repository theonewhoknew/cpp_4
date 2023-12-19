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
	_brain = new Brain(*(copy._brain));
}

Cat& Cat::operator=(const Cat &copy)
{	
	std::cout << "Cat copy assignment operator called" << std::endl;
	_type = copy._type;
	_brain = copy._brain;
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat flew" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meoooow!" << std::endl;
}

void Cat::writeIdea(int n, std::string idea) const
{
	_brain->writeIdea(n, idea);
}

void Cat::printIdeas(int n) const
{
	_brain->printIdeas(n);
}

void Cat::f()
{

}