#include "MiningBarge.hh"

MiningBarge::MiningBarge()
{
	this->_lasers[0] = 0;
	this->_lasers[1] = 0;
	this->_lasers[2] = 0;
	this->_lasers[3] = 0;
}

MiningBarge::~MiningBarge()
{

}

MiningBarge::MiningBarge(const MiningBarge& mb)
{
	this->_lasers[0] = mb._lasers[0];
	this->_lasers[1] = mb._lasers[1];
	this->_lasers[2] = mb._lasers[2];
	this->_lasers[3] = mb._lasers[3];
}

MiningBarge&	MiningBarge::operator=(const MiningBarge& mb)
{
	this->_lasers[0] = mb._lasers[0];
	this->_lasers[1] = mb._lasers[1];
	this->_lasers[2] = mb._lasers[2];
	this->_lasers[3] = mb._lasers[3];
	return *this;
}

void			MiningBarge::equip(IMiningLaser *l)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!this->_lasers[i])
		{
			this->_lasers[i] = l;
			break ;
		}
	}
}

void			MiningBarge::mine(IAsteroid *a) const
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_lasers[i])
			this->_lasers[i]->mine(a);
	}
}
