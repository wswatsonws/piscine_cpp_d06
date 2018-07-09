#ifndef IASTEROID_HH
#define IASTEROID_HH

#include <string>
class IAsteroid;
class DeepCoreMiner;
class StripMiner;
class IMiningLaser;
#include "IMiningLaser.hh"

class IAsteroid{
public:
  virtual ~IAsteroid(){};
  virtual std::string beMined(IMiningLaser *) const = 0;
  virtual std::string beMined(DeepCoreMiner *) const = 0;
  virtual std::string beMined(StripMiner *)const  = 0;

  virtual std::string getName() const = 0;
  
};
#endif
