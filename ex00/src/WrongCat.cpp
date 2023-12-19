#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat appeared!" << std::endl;
	setType("WrongCat");
}

WrongCat::WrongCat(WrongCat &copy) : WrongAnimal()
{	
	std::cout << "WrongCat copy constructor called" << std::endl;
	_type = copy._type;
}

WrongCat& WrongCat::operator=(const WrongCat &copy)
{	
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	_type = copy._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat flew" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Meoooow!" << std::endl;
}

