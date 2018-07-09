#include "DeepCoreMiner.hh"
#include <iostream>

DeepCoreMiner::DeepCoreMiner()
{

}

DeepCoreMiner::~DeepCoreMiner()
{

}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner& dcm)
{
	(void)dcm;
}

DeepCoreMiner&	DeepCoreMiner::operator=(const DeepCoreMiner& dcm)
{
	(void)dcm;
	return *this;
}

void			DeepCoreMiner::mine(IAsteroid *a)
{
	if (!a)
		return ;
	std::cout << "* mining deep ... got " << a->beMined(this) << " ! *" << std::endl;
}
