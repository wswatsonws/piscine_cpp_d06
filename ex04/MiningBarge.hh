#ifndef MININGBARGE_H
# define MININGBARGE_H

# include "IMiningLaser.hh"
# include "IAsteroid.hh"

class MiningBarge
{
public:
	IMiningLaser * getMiningLaser (int index) const;
	int getMiningLaserCount (void) const;
	
	MiningBarge (void);
	MiningBarge (MiningBarge const & target);
	~MiningBarge (void);
	
	void equip (IMiningLaser * newMiningLaser);
	void mine (IAsteroid * asteroid) const;

	MiningBarge & operator = (MiningBarge const & target);

private:
	static int const _maxMiningLasers;
	IMiningLaser ** _miningLasers;

	void _init(void);
};

std::ostream & operator << (std::ostream & o, MiningBarge const & target);


#endif
