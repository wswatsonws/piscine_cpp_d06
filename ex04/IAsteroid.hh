#ifndef IASTEROID_H_
# define IASTEROID_H_

# include <string>

class DeepCoreMiner;
class StripMiner;

class IAsteroid
{
	public:
	virtual ~IAsteroid() {}
	virtual std::string beMined(DeepCoreMiner *l) const = 0;
	virtual std::string beMined(StripMiner *l) const = 0;
	// [...]
	virtual std::string getName() const = 0;
};

#endif
