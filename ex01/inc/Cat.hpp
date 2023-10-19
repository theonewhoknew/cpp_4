#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *_brain;

public:
	Cat();
	virtual ~Cat();

	void makeSound() const;
};

#endif