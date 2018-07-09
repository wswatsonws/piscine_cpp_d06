#ifndef ASSAULT_HH
#define ASSAULT_HH

#include "ISpaceMarine.hh"

class AssaultTerminator : public ISpaceMarine {
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &other);
	virtual ~AssaultTerminator();
	AssaultTerminator &operator=(AssaultTerminator const &other);
	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
