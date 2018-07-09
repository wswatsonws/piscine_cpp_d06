#ifndef STRIPMINER_H
# define STRIPMINER_H

# include "IMiningLaser.hh"

class StripMiner : public IMiningLaser
{
public:
	StripMiner (void);
	StripMiner (StripMiner const & target);
	~StripMiner (void);
	
	void mine (IAsteroid * target);

	StripMiner & operator = (StripMiner const & target);
};

std::ostream & operator << (std::ostream & o, StripMiner const & target);

#endif
