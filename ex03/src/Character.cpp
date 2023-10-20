#include "../inc/ICharacter.hpp"
#include "../inc/Character.hpp"
#include "../inc/AMateria.hpp"
#include <iostream>

Character::Character(std::string name)
{	
	std::cout << "Character created!" << std::endl;
	_name = name;
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
}

Character::Character(Character &copy)
{	
	std::cout << "Character copy constructor called" << std::endl;
	_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = copy._inventory[i];
	}
}

Character& Character::operator=(const Character &copy)
{	
	std::cout << "Character copy assignment operator called" << std::endl;
	_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = copy._inventory[i];
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destroyed!" << std::endl;
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}
