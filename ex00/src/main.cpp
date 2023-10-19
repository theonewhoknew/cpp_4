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

	const WrongAnimal* wanimal = new WrongAnimal();
	wanimal->makeSound();

	const WrongCat* wcat = new WrongCat();
	wcat->makeSound();
	
	delete meta;
	delete j;
	delete i;

	delete wanimal;
	delete wcat;

	return (0);
}
