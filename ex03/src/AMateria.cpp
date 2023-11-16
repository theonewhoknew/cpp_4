#include "../inc/AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const & type)
{
	//std::cout << "AMateria created!" << std::endl;
	_type = type;
}

AMateria::AMateria(AMateria &copy)
{	
	//std::cout << "AMateria copy constructor called" << std::endl;
	_type = copy._type;
}

AMateria& AMateria::operator=(const AMateria &copy)
{	
	//std::cout << "AMateria copy assignment operator called" << std::endl;
	_type = copy._type;
	return (*this);
}

AMateria::~AMateria()
{
	//std::cout << "AMateria destroyed!" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{	
	if (_type == "ice")
		std::cout << "* shoots an ice bot at " << target.getName() << " *" << std::endl;
	else if(_type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}