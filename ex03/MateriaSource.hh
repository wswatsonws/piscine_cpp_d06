#ifndef MATERIASOURCE_H_
# define MATERIASOURCE_H_

# include "IMateriaSource.hh"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_mats[4];

	void		release();

public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource& ms);
	MateriaSource&	operator=(const MateriaSource& ms);

	virtual void		learnMateria(AMateria *m);
	virtual AMateria*	createMateria(const std::string& type);
};

#endif
