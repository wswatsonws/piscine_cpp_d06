#ifndef CURE_H_
# define CURE_H_

# include "AMateria.hh"

class Cure : public AMateria
{
private:
public:
	Cure();
	virtual ~Cure();
	Cure(const Cure& c);
	Cure& operator=(const Cure& c);

	virtual AMateria 	*clone() const;
	virtual void 		use(ICharacter& target);
};

#endif
