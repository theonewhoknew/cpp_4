#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/WrongAnimal.hpp"
#include <iostream>

int main()
{	
	Cat a;

	Dog *b = new Dog;

	Animal *c = b;

	c->makeSound();

	//Animal a;
	//Animal *z = new Animal;

	return (0);
}
