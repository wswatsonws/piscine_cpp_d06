#include "Ice.hh"
#include <iostream>

Ice::Ice() :
	AMateria("ice")
{

}

Ice::~Ice()
{

}

Ice::Ice(const Ice& i) :
	AMateria(i)
{

}

Ice&	Ice::operator=(const Ice& i)
{
	AMateria::operator=(i);
	return *this;
}

AMateria	*Ice::clone() const
{
	return new Ice(*this);
}

void 		Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
