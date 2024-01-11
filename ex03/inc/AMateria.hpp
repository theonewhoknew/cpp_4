#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;	
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria &copy);
		AMateria& operator=(const AMateria &instance);
		virtual ~AMateria();
		
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		void use(ICharacter& target);
};
	
#endif