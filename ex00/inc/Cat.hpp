#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{

public:
	Cat();
	Cat(Cat &copy);
	Cat& operator=(const Cat &instance);
	~Cat();

	void makeSound() const;
};

#endif