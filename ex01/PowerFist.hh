#ifndef POWERFIST_H_
#define POWERFIST_H_

#include <string>
#include <iostream>

#include "AWeapon.hh"

class PowerFist : public AWeapon {
protected:

public:
	PowerFist();
	virtual ~PowerFist();

	virtual void attack() const;

};

#endif
