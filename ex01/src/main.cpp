#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/WrongAnimal.hpp"
#include <iostream>

int main()
{	
	{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;
	delete j;
	delete i;
	std::cout << std::endl;
	std::cout << std::endl;

	Animal *animal_arr[20];

	for(int i = 0; i < 10; i++)
	{	
		animal_arr[i] = new Dog();
	}

	std::cout << std::endl;
	std::cout << std::endl;

	for(int i = 10; i < 20; i++)
	{	
		animal_arr[i] = new Cat();
	}

	std::cout << std::endl;
	std::cout << std::endl;

	animal_arr[5]->makeSound();

	animal_arr[15]->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;

	for(int i = 0; i < 20; i++)
	{	
		delete animal_arr[i];
	}
	std::cout << std::endl;
	std::cout << std::endl;
	}
	{
		Dog a;
		a.printIdeas(10);
		std::cout << std::endl;
		std::cout << std::endl;
		a.writeIdea(0, "hola");
		a.printIdeas(10);
		std::cout << std::endl;
		std::cout << std::endl;
		const Dog b(a);
		b.printIdeas(10);
		std::cout << std::endl;
		std::cout << std::endl;
		b.writeIdea(1, "adios");
		a.printIdeas(10);
		std::cout << std::endl;
		std::cout << std::endl;
		a = b;
		a.printIdeas(10);
		std::cout << std::endl;
		std::cout << std::endl;
	}
	return (0);
}
