#ifndef MININGBARGE_H_
# define MININGBARGE_H_

# include "IMiningLaser.hh"
# include "IAsteroid.hh"

class MiningBarge
{
	private:
		IMiningLaser	*_lasers[4];
	public:
		MiningBarge();
		~MiningBarge();
		MiningBarge(const MiningBarge& mb);
		MiningBarge& operator=(const MiningBarge& mb);

		void		equip(IMiningLaser *l);
		void		mine(IAsteroid *a) const;
};

#endif
