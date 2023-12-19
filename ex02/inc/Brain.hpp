#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
protected:
	std::string _ideas[100];

public:
	Brain();
	Brain(Brain &copy);
	Brain& operator=(const Brain &instance);
	~Brain();

	void writeIdea(int n, std::string idea);
	void printIdeas(int n);
};

#endif