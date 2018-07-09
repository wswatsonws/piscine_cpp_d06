#ifndef PLASMARIFLE_H_
#define PLASMARIFLE_H_

#include <string>
#include <iostream>

#include "AWeapon.hh"

class PlasmaRifle : public AWeapon {
protected:

public:
	PlasmaRifle();
	virtual ~PlasmaRifle();

	virtual void attack() const;
};

#endif
