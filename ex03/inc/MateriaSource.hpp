#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_materia[4];
	
	public:
		MateriaSource();
		MateriaSource(MateriaSource &copy);
		MateriaSource& operator=(const MateriaSource &copy);
		virtual ~MateriaSource();
		
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};