#ifndef ASTEROKREOG_H
# define ASTEROKREOG_H

# include "IAsteroid.hh"

//AsteroBocal
class AsteroKreog : public IAsteroid
{
public:
	std::string getName (void) const;

	AsteroKreog (void);
	AsteroKreog (AsteroKreog const & target);
	~AsteroKreog (void);

	std::string beMined (StripMiner const * tool) const;
	std::string beMined (DeepCoreMiner const * tool) const;
	
	AsteroKreog & operator = (AsteroKreog const & target);
};

std::ostream & operator << (std::ostream & o, AsteroKreog const & target);

#endif
