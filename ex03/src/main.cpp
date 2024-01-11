#include "../inc/AMateria.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Character.hpp"
#include "../inc/MateriaSource.hpp"

#include <iostream>

int main()
{	

	{
	AMateria *a = new Ice();
	std::cout << a->getType() << std::endl;
	delete a;
	a = new Cure();
	std::cout << a->getType() << std::endl;
	delete a;
	std::cout << "--------------------------------" << std::endl;
	}

	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		std::cout << "------print materias src----- " << std::endl;
		src->printMaterias();

		IMateriaSource *src_copy(src);
		std::cout << "------print materias src copy----- " << std::endl;
		src_copy->printMaterias();

		src_copy->learnMateria(new Cure());

		std::cout << "------print materias src - deep copy check----- " << std::endl;
		src->printMaterias();

		std::cout << "------print materias srccopy - deep copy check----- " << std::endl;
		src_copy->printMaterias();

		delete src;
	}

	{
	AMateria *a = new Ice();
	std::cout << a->getType() << std::endl;
	delete a;
	}
	
	{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	me->unequip(0);
	me->unequip(1);
	me->use(0, *bob);
	me->unequip(0);

	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);

	me->equip(tmp);

	delete bob;
	delete me; 
	delete src;
	}
	return 0;
}