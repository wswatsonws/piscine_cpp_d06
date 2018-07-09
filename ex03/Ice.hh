#ifndef ICE_H_
#define ICE_H_

#include <string>
#include <iostream>

#include "AMateria.hh"
#include "ICharacter.hh"

class Ice : public AMateria {
protected:

public:
	Ice();
	Ice(Ice const & ice);
	~Ice();

	virtual AMateria * clone() const;
	virtual void effect(ICharacter & target);

};

#endif
