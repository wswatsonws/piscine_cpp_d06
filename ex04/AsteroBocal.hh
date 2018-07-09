#ifndef ASTEROBOCAL_H_
# define ASTEROBOCAL_H_

# include "IAsteroid.hh"
# include <string>

class AsteroBocal : public IAsteroid
{
public:
	AsteroBocal();
	AsteroBocal(const AsteroBocal& ab);
	virtual ~AsteroBocal();
	AsteroBocal& operator=(const AsteroBocal& ab);

	virtual std::string	getName() const;
	virtual std::string beMined(DeepCoreMiner *l) const;
	virtual std::string beMined(StripMiner *l) const;
};

#endif
