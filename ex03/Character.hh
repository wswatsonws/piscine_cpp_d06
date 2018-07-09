#ifndef CHARACTER_H_
# define CHARACTER_H_

# include "ICharacter.hh"

class AMateria;

class Character : public ICharacter
{
private:
	AMateria	*_mats[4];
	std::string	_name;

	Character();

	void		release();

public:
	Character(const std::string& name);
	virtual		~Character();
	Character(const Character& c);
	Character& operator=(const Character& c);

	virtual const std::string&		getName() const;
	virtual void					equip(AMateria* m);
	virtual void					unequip(int idx);
	virtual void					use(int idx, ICharacter& target);
};

#endif
