#include "AMateria.hh"

AMateria::AMateria(const std::string& type) :
	_type(type),
	_xp(0)
{

}

AMateria::AMateria() :
	_type(""),
	_xp(0)
{

}

AMateria::~AMateria()
{
	
}

AMateria::AMateria(const AMateria& m) :
	_type(m._type),
	_xp(m._xp)
{

}

AMateria&	AMateria::operator=(const AMateria& m)
{
	this->_xp = m._xp;
	return *this;
}

const std::string	&AMateria::getType() const
{
	return (this->_type);
}

unsigned int		AMateria::getXP() const
{
	return this->_xp;
}

void				AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}
