#ifndef TACTICAL_HH
#define TACTICAL_HH

#include "ISpaceMarine.hh"

class TacticalMarine : public ISpaceMarine {
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &other);
	virtual ~TacticalMarine();
	TacticalMarine &operator=(TacticalMarine const &other);
	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
