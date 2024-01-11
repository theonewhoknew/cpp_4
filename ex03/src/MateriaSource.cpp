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
		_materia[i] = NULL;
	}
	for (int i = 0; i < 4; i++)
	{	
		_materia[i] = copy._materia[i]->clone();
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &instance)
{	
	//std::cout << "MateriaSource assignment operator called" << std::endl;
	for (int i = 0; i < 4; i++)
	{	
		_materia[i] = NULL;
	}
	for (int i = 0; i < 4; i++)
	{
		_materia[i] = instance._materia[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "Materia source destroyed." << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete _materia[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
{	
	int	flag = 0;
	for (int i = 0; i < 4; i++)
	{	
		if (!_materia[i])
		{
			_materia[i] = m;
			flag = 1;
			std::cout << "Materia " << m->getType() << " learned in slot " << i << " ." << std::endl;
			break ;
		}
	}
	if (!flag)
		std::cout << "Materia " << m->getType() << " could not be learned. No free slots in Materia Source!" << std::endl;
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

void	MateriaSource::printMaterias(void)
{	
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			std::cout << "Materia slot " << i << " is " << _materia[i]->getType() << " ." << std::endl;
		else
			std::cout << "Materia slot " << i <<  " is empty." << std::endl;
	}
}