#include <iostream>
#include "AssaultTerminator.hh"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &other)
{
	(void) other;
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator	&AssaultTerminator::operator=(AssaultTerminator const &other)
{
	(void) other;
	return *this;
}

ISpaceMarine	*AssaultTerminator::clone() const
{
	return new AssaultTerminator();
}

void			AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT !\n";
}

void			AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *\n";
}

void			AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *\n";
}
