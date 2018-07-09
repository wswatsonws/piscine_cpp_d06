#ifndef DEEPCORE_MINER_HH
#define DEEPCORE_MINER_HH

#include <iostream>
#include "IMiningLaser.hh"

class DeepCoreMiner : public IMiningLaser{
public:
  DeepCoreMiner();
  ~DeepCoreMiner();
  virtual void mine(IAsteroid *);
};
#endif
