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
	Dog(Dog &copy);
	Dog& operator=(const Dog &instance);
	~Dog();

	void 	makeSound() const;
	void	writeIdea(int n, std::string idea) const;
	void	printIdeas(int n) const;
};

#endif