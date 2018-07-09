#include "StripMiner.hh"
#include <iostream>

StripMiner::StripMiner()
{

}

StripMiner::~StripMiner()
{

}

StripMiner::StripMiner(const StripMiner& sm)
{
	(void)sm;
}

StripMiner& StripMiner::operator=(const StripMiner& sm)
{
	(void)sm;
	return *this;
}

void		StripMiner::mine(IAsteroid *a)
{
	if (!a)
		return ;
	std::cout << "* strip mining ... got " << a->beMined(this) << " ! *" << std::endl;
}
