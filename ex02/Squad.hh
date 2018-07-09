#ifndef SQUAD_HH
#define SQUAD_HH

#include "ISquad.hh"
#include "ISpaceMarine.hh"

class Squad : public ISquad {
private:
	ISpaceMarine **marines;
	int count;
	int arrLen;
public:
	Squad();
	Squad(Squad const &other);
	virtual ~Squad();
	Squad &operator=(Squad const &other);
	int getCount() const;
	ISpaceMarine *getUnit(int) const;
	int push(ISpaceMarine*);
};

#endif
