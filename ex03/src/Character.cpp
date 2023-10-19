#include "../inc/ICharacter.hpp"
#include "../inc/Character.hpp"
#include "../inc/AMateria.hpp"
#include <iostream>

Character::Character()
{
	std::cout << "Character created!" << std::endl;
}

Character::Character(Character &copy)
{	
	std::cout << "Character copy constructor called" << std::endl;
}

Character& Character::operator=(const Character &copy)
{	
	std::cout << "Character copy assignment operator called" << std::endl;
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destroyed!" << std::endl;
}
