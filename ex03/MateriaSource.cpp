#include "MateriaSource.hh"
#include "AMateria.hh"

MateriaSource::MateriaSource()
{
	this->_mats[0] = 0;
	this->_mats[1] = 0;
	this->_mats[2] = 0;
	this->_mats[3] = 0;
}

MateriaSource::~MateriaSource()
{
}

MateriaSource::MateriaSource(const MateriaSource& ms)
{
	for (int i = 0; i < 4; ++i)
	{
		if (ms._mats[i])
			this->_mats[i] = ms._mats[i]->clone();
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& ms)
{
	this->release();
	for (int i = 0; i < 4; ++i)
	{
		if (ms._mats[i])
			this->_mats[i] = ms._mats[i]->clone();
	}
	return *this;
}

void			MateriaSource::release()
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_mats[i])
			delete this->_mats[i];
		this->_mats[i] = 0;
	}
}

void			MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!this->_mats[i])
		{
			this->_mats[i] = m;
			break ;
		}
	}
}

AMateria*		MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_mats[i] && this->_mats[i]->getType() == type)
			return this->_mats[i]->clone();
	}
	return (0);
}
