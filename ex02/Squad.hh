//
// Created by Alen BADRAJAN on 7/25/17.
//

#ifndef EX02_SQUAD_H_
#define EX02_SQUAD_H_

#include "ISquad.hh"

class Squad : public ISquad {

public:

  static int      nr_atributes;
  ISpaceMarine**    s;

  Squad();
  Squad(Squad & f);
  ~Squad();

	Squad & operator=(Squad & r);

	int     getCount() const;
	ISpaceMarine* getUnit(int) const;
	int push(ISpaceMarine*);
	
};
#endif 
