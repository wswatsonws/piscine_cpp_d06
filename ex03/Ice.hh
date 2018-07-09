#ifndef ICE_H_
# define ICE_H_

# include "AMateria.hh"

class Ice : public AMateria
{
private:
public:
	Ice();
	virtual ~Ice();
	Ice(const Ice& i);
	Ice& operator=(const Ice& i);

	virtual AMateria* 	clone() const;
	virtual void 		use(ICharacter& target);
};

#endif
