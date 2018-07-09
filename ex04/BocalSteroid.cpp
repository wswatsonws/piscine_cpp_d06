#include "BocalSteroid.hh"
#include "StripMiner.hh"

BocalSteroid::BocalSteroid()
{

}

BocalSteroid::BocalSteroid(const BocalSteroid& ab)
{
	(void)ab;
}

BocalSteroid::~BocalSteroid()
{
	
}

BocalSteroid&	BocalSteroid::operator=(const BocalSteroid& ab)
{
	(void)ab;
	return *this;
}

std::string		BocalSteroid::getName() const
{
	return "BocalSteroid";
}

std::string 	BocalSteroid::beMined(DeepCoreMiner *l) const
{
	(void)l;
	return "Zazium";
}

std::string 	BocalSteroid::beMined(StripMiner *l) const
{
	(void)l;
	return "Krpite";
}
