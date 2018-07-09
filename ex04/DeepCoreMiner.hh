#ifndef DEEPCOREMINER_H
# define DEEPCOREMINER_H

# include "IMiningLaser.hh"

class DeepCoreMiner : public IMiningLaser
{
public:
	DeepCoreMiner (void);
	DeepCoreMiner (DeepCoreMiner const & target);
	~DeepCoreMiner (void);
	
	void mine (IAsteroid * target);

	DeepCoreMiner & operator = (DeepCoreMiner const & target);
};

std::ostream & operator << (std::ostream & o, DeepCoreMiner const & target);

#endif
