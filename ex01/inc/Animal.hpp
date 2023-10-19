#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
	std::string _type;

public:
	Animal();
	Animal(Animal &copy);
	Animal& operator=(const Animal &instance);
	virtual ~Animal();

	std::string getType() const;
	void setType(std::string type);

	virtual void makeSound() const;
};

#endif