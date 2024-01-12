#include "../inc/ICharacter.hpp"
#include "../inc/Character.hpp"
#include "../inc/AMateria.hpp"
#include <iostream>

Character::Character()
{	
	//std::cout << "Character created!" << std::endl;
	_name = "anonymous";
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
	for (int i = 0; i < 100; i++)
	{
		_floor[i] = NULL;
	}
}

Character::Character(std::string name)
{	
	//std::cout << "Character created!" << std::endl;
	_name = name;
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
	for (int i = 0; i < 100; i++)
	{
		_floor[i] = NULL;
	}
}

Character::Character(Character &copy)
{	
	//std::cout << "Character copy constructor called" << std::endl;
	_name = copy._name;
	for (int i = 0; i < 4; i++)
	{	
		if (copy._inventory[i])
		{	
			_inventory[i] = copy._inventory[i]->clone();
		}
		else
			_inventory[i] = NULL;
	}
	for (int i = 0; i < 100; i++)
	{
		if (copy._floor[i])
		{	
			_floor[i] = copy._floor[i]->clone();
		}
		else
			_floor[i] = NULL;
	}
}

Character& Character::operator=(const Character &instance)
{	
	//std::cout << "Character copy assignment operator called" << std::endl;
	_name = instance._name;
	for (int i = 0; i < 4; i++)
	{	
		if (instance._inventory[i])
		{	
			_inventory[i] = instance._inventory[i]->clone();
		}
		else
			_inventory[i] = NULL;
	}
	for (int i = 0; i < 100; i++)
	{
		if (instance._floor[i])
		{	
			_floor[i] = instance._floor[i]->clone();
		}
		else
			_floor[i] = NULL;
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character " << _name << " went home!" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete _inventory[i];
		_inventory[i] = NULL;
	}
	clean_floor();
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{	
	int	flag = 0;
	int slot = 0;

	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m->clone();
			flag = 1;
			slot = i;
			break;
		}
	}
	if (!flag)
		std::cout << "There are no empty slots to equip new materia!" << std::endl;
	else
		std::cout << m->getType() << " was equipped in slot " << slot << " ." << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{	
		if (_inventory[idx])
		{
			for (int i = 0; i < 100; i++)
			{
				if (!_floor[i])
					_floor[i] = _inventory[idx]->clone();
			}
			delete _inventory[idx];
			_inventory[idx] = NULL;
			std::cout << "materia in slot " << idx << " was unequipped." << std::endl;
		}
		else
		{
			std::cout << "slot " << idx << " is already empty!" << std::endl;
		}
	}
	else
	{
		std::cout << "unequip was not possible. wrong inventory slot provided." << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{	
	if (_inventory[idx])
	{
		if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
	}
	else
		std::cout << "there's no materia in slot " << idx << " to target " << target.getName() << " with!" << std::endl;
}

void Character::clean_floor(void)
{
	for (int i = 0; i < 100; i++)
	{
		delete _floor[i];
		_floor[i] = NULL;
	}
}

void Character::print_inventory(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			std::cout << "Inventory slot " << i << " is " << _inventory[i]->getType() << " ." << std::endl;
		else
			std::cout << "Inventory slot " << i <<  " is empty." << std::endl;
	}
}
