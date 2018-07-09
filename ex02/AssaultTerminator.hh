//
// Created by Alen BADRAJAN on 7/25/17.
//

#ifndef EX02_ASSAULTTERMINATOR_H_
#define EX02_ASSAULTTERMINATOR_H_

#include "ISpaceMarine.hh"

class AssaultTerminator : public ISpaceMarine {

public:

	AssaultTerminator();
	AssaultTerminator(AssaultTerminator & f);
	~AssaultTerminator();

    ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	AssaultTerminator & operator=(AssaultTerminator & r);

};


#endif
