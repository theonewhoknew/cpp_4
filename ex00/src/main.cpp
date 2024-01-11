#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/WrongAnimal.hpp"
#include <iostream>

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

/* 	Cat* z;
	const Dog* y = new Dog();
	z = y; */
	std::cout << std::endl;
	Dog *z = new Dog();
	const Animal *y = z;
	y->makeSound();
	delete z;
	std::cout << std::endl;



	std::cout << std::endl;
	Animal f;
	//Dog e(f);  no se puede generar un copy constructor Dog a partir de Animal, es decir, de clase derivada a partir de la clase base
	Dog g;
	Dog e(g);
	std::cout << e.getType() << " " << std::endl;
	std::cout << f.getType() << " " << std::endl;
	f = e;   // posible asignar de clase derivada a clase base, pero ocurre slicing, solo se copia informacion presente en base class
	std::cout << f.getType() << " " << std::endl;
	std::cout << std::endl;
	
	const WrongAnimal* wanimal = new WrongAnimal();
	wanimal->makeSound();
	const WrongAnimal* wcat = new WrongCat();
	wcat->makeSound();
	
	delete wanimal;
	delete wcat;

	return (0);
}
