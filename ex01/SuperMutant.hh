#ifndef SUPERMUTANT_H_
#define SUPERMUTANT_H_

#include <string>
#include <iostream>

#include "AEnemy.hh"

class SuperMutant : public AEnemy {
protected:

public:
	SuperMutant();
	~SuperMutant();

	void takeDamage(int damage);

};

#endif
