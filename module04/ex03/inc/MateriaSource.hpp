#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource {
public:
	MateriaSource();
	MateriaSource(const MateriaSource &src);
	MateriaSource &operator=(const MateriaSource &rhs);
	~MateriaSource();

	virtual void learnMateria(AMateria* materia);
	virtual AMateria* createMateria(std::string const & type);
};

#endif
