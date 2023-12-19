#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource()
{	
	//std::cout << "MateriaSource created!" << std::endl;
	for (int i = 0; i < 4; i++)
	{	
		_materia[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource &copy)
{	
	//std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{	
		delete _materia[i];
		_materia[i] = copy._materia[i]->clone();
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &copy)
{	
	//std::cout << "MateriaSource assignment operator called" << std::endl;
	for (int i = 0; i < 4; i++)
	{	
		delete _materia[i];
		_materia[i] = copy._materia[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	//std::cout << "MateriaSource destroyed!" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{	
		if (!_materia[i])
		{
			_materia[i] = m->clone();
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if(_materia[i]->getType() == type)
			return (_materia[i]->clone());
	}
	return (0);
}