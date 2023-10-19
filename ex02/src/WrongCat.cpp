#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	std::cout << "WrongCat appeared!" << std::endl;
	setType("WrongCat");
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat flew" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Meoooow!" << std::endl;
}

