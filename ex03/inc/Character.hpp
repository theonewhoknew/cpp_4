#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character();
		Character(Character &copy);
		Character& operator=(const Character &copy);
		virtual ~Character();
};

#endif