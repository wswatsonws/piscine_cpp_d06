#ifndef DEEPCOREMINER_H_
# define DEEPCOREMINER_H_

# include "IMiningLaser.hh"

class DeepCoreMiner : public IMiningLaser
{
private:
public:
	DeepCoreMiner();
	virtual ~DeepCoreMiner();
	DeepCoreMiner(const DeepCoreMiner& dcm);
	DeepCoreMiner& operator=(const DeepCoreMiner& dcm);

	virtual void		mine(IAsteroid *a);
};

#endif
