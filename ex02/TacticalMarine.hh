//
// Created by Alen BADRAJAN on 7/25/17.
//

#ifndef EX02_TACTICALMARINE_H_
#define EX02_TACTICALMARINE_H_

#include "ISpaceMarine.hh"

class TacticalMarine : public ISpaceMarine {
public:

	TacticalMarine();
	TacticalMarine(TacticalMarine & f);
	~TacticalMarine();

	TacticalMarine & operator=(TacticalMarine & r);

    ISpaceMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};

#endif 
