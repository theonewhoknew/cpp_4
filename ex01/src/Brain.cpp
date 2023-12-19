#include "../inc/Brain.hpp"
#include <iostream>
#include <cstring>

Brain::Brain()
{
	std::cout << "Brain was created!" << std::endl;
	for ( int i = 0; i < 100; i++ ) 
	{
        this->_ideas[i] = "blank";
    }
}

Brain::Brain(Brain &copy)
{	
	std::cout << "Brain copy constructor called" << std::endl;
	for ( int i = 0; i < 100; i++ ) 
	{
        this->_ideas[i] = copy._ideas[i];
    }
}

Brain& Brain::operator=(const Brain &copy)
{	
	std::cout << "Brain copy assignment operator called" << std::endl;
	for ( int i = 0; i < 100; i++ ) 
	{
            this->_ideas[i] = copy._ideas[i];
    }
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain was destroyed!" << std::endl;
}

void Brain::writeIdea(int n, std::string idea)
{
	_ideas[n] = idea;
}

void Brain::printIdeas(int n)
{	
	if (n > 100)
		n = 100;
	for ( int i = 0; i < n; i++ ) 
	{
        std::cout << this->_ideas[i] << " " << i + 1 << std::endl;
    }
}