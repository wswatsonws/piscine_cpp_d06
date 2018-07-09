#ifndef STRIPMINER_H_
# define STRIPMINER_H_

# include "IMiningLaser.hh"

class StripMiner : public IMiningLaser
{
private:
public:
	StripMiner();
	StripMiner(const StripMiner& sm);
	
	virtual				~StripMiner();
	StripMiner&			operator=(const StripMiner& sm);

	virtual void		mine(IAsteroid *a);
};

#endif
