#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
	std::string _type;

public:
	WrongAnimal();
	WrongAnimal(WrongAnimal &copy);
	WrongAnimal& operator=(const WrongAnimal &instance);
	virtual ~WrongAnimal();

	std::string getType() const;
	void setType(std::string type);

	virtual void makeSound() const;
};

#endif