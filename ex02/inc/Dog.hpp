#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *_brain;

public:
	Dog();
	virtual ~Dog();

	void makeSound() const;

	virtual void f();
};

#endif