#ifndef BOCALSTEROID_H_
# define BOCALSTEROID_H_

# include "IAsteroid.hh"
# include <string>

class BocalSteroid : public IAsteroid
{
public:
	BocalSteroid();
	BocalSteroid(const BocalSteroid& ab);
	virtual ~BocalSteroid();
	BocalSteroid& operator=(const BocalSteroid& ab);

	virtual std::string	getName() const;
	virtual std::string beMined(DeepCoreMiner *l) const;
	virtual std::string beMined(StripMiner *l) const;
};

#endif
