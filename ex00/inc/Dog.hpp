#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{

public:
	Dog();
	Dog(Dog &copy);
	Dog& operator=(const Dog &instance);
	~Dog();

	void makeSound() const;
};

#endif