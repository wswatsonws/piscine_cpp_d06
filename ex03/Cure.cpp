#include "Cure.hh"
#include <iostream>
#include "AMateria.hh"

Cure::Cure() :
	AMateria("cure")
{

}

Cure::~Cure()
{

}

Cure::Cure(const Cure& c) :
	AMateria(c)
{

}

Cure&	Cure::operator=(const Cure& c)
{
	AMateria::operator=(c);
	return *this;
}

AMateria	*Cure::clone() const
{
	return new Cure(*this);
}

void 		Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
