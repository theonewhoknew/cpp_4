#include "../inc/AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const & type)
{
	std::cout << "Ice created!" << std::endl;
	_type = type;
}

AMateria::AMateria(AMateria &copy)
{	
	std::cout << "Ice copy constructor called" << std::endl;
	_type = copy._type;
}

AMateria& AMateria::operator=(const AMateria &copy)
{	
	std::cout << "Ice copy assignment operator called" << std::endl;
	_type = copy._type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "Random animal flew!" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	
}


