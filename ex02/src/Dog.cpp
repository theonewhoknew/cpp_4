#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog appeared!" << std::endl;
	_brain = new Brain;
	setType("Dog");
}

Dog::Dog(Dog &copy) : Animal()
{	
	std::cout << "Dog copy constructor called" << std::endl;
	_type = copy._type;
	_brain = new Brain(*(copy._brain));
}

Dog& Dog::operator=(const Dog &copy)
{	
	std::cout << "Dog copy assignment operator called" << std::endl;
	_type = copy._type;
	*(_brain) = *(copy._brain);
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog flew" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof!" << std::endl;
}

void Dog::writeIdea(int n, std::string idea) const
{
	_brain->writeIdea(n, idea);
}

void Dog::printIdeas(int n) const
{
	_brain->printIdeas(n);
}

void Dog::f()
{

}