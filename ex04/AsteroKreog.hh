#ifndef ASTERO_KREOG_HH
#define ASTERO_KREOG_HH

#include <string>
#include "IAsteroid.hh"
#include "IMiningLaser.hh"
#include "DeepCoreMiner.hh"
//#include "StripMiner.hh"

class AsteroKreog : public IAsteroid{
public:
  AsteroKreog();
  ~AsteroKreog();
  std::string beMined(IMiningLaser *p) const;
  std::string beMined(DeepCoreMiner *p) const;
  std::string beMined(StripMiner *p) const;
  virtual std::string getName() const;

};

#endif
