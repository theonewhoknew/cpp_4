#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/WrongAnimal.hpp"
#include <iostream>

int main()
{	
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	Animal *animal_arr[20];

	for(int i = 0; i < 10; i++)
	{	
		animal_arr[i] = new Dog();
	}
	for(int i = 10; i < 20; i++)
	{	
		animal_arr[i] = new Cat();
	}

	animal_arr[5]->makeSound();

	animal_arr[15]->makeSound();

	for(int i = 0; i < 20; i++)
	{	
		delete animal_arr[i];
	}

	return (0);
}
