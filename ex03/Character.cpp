#include "Character.hh"
#include "AMateria.hh"

Character::Character()
{

}

Character::Character(const std::string& name) :
	_name(name)
{
	this->_mats[0] = 0;
	this->_mats[1] = 0;
	this->_mats[2] = 0;
	this->_mats[3] = 0;
}

Character::~Character()
{
	this->release();
}

Character::Character(const Character& c) :
	_name(c._name)
{
	this->_mats[0] = 0;
	this->_mats[1] = 0;
	this->_mats[2] = 0;
	this->_mats[3] = 0;
	for (int i = 0; i < 4; ++i)
	{
		if (c._mats[i])
			this->_mats[i] = c._mats[i]->clone();
	}
}

Character&	Character::operator=(const Character& c)
{
	this->release();
	for (int i = 0; i < 4; ++i)
	{
		if (c._mats[i])
			this->_mats[i] = c._mats[i]->clone();
	}
	return *this;
}

void				Character::release()
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_mats[i])
			delete this->_mats[i];
		this->_mats[i] = 0;
	}
}

const std::string&	Character::getName() const
{
	return this->_name;
}

void				Character::equip(AMateria *mat)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!this->_mats[i])
		{
			this->_mats[i] = mat;
			break ;
		}
	}
}

void				Character::unequip(int index)
{
	if (this->_mats[index])
	{
		for (;index < 3; ++index)
			this->_mats[index + 1] = this->_mats[index];
		this->_mats[3] = 0;
	}
}

void				Character::use(int index, ICharacter& target)
{
	if (this->_mats[index])
		this->_mats[index]->use(target);
}
