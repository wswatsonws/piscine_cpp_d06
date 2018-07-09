#ifndef PEON_H_
#define PEON_H_

#include <string>
#include <iostream>

#include "Victim.hh"

class Peon : public Victim {
protected:

public:
	Peon(std::string name);
	virtual ~Peon();

	void getPolymorphed() const;

};

#endif
