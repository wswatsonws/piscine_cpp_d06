#include "AsteroBocal.hh"
#include "StripMiner.hh"

AsteroBocal::AsteroBocal()
{

}

AsteroBocal::AsteroBocal(const AsteroBocal& ab)
{
	(void)ab;
}

AsteroBocal::~AsteroBocal()
{
	
}

AsteroBocal&	AsteroBocal::operator=(const AsteroBocal& ab)
{
	(void)ab;
	return *this;
}

std::string		AsteroBocal::getName() const
{
	return "AsteroBocal";
}

std::string 	AsteroBocal::beMined(DeepCoreMiner *l) const
{
	(void)l;
	return "Thorite";
}

std::string 	AsteroBocal::beMined(StripMiner *l) const
{
	(void)l;
	return "Flavium";
}
