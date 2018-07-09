#ifndef AENEMY_H_
#define AENEMY_H_

#include <string>
#include <iostream>

class AEnemy {
protected:
	int hp;
	std::string type;

public:
	AEnemy(int hp, std::string const & type);
	virtual ~AEnemy();

	std::string const & getType() const;
	int getHP() const;

	virtual void takeDamage(int damage);
};

#endif
