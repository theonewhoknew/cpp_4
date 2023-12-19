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
	Cat(Cat &copy);
	Cat& operator=(const Cat &instance);
	~Cat();

	void makeSound() const;
	void	writeIdea(int n, std::string idea) const;
	void	printIdeas(int n) const;
};

#endif