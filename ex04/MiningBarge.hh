#ifndef MINING_BARGE_HH
#define MINING_BARGE_HH

#include "IAsteroid.hh"
#include "IMiningLaser.hh"
class MiningBarge{
  IMiningLaser *_weapon[4];
public:
  MiningBarge();
  ~MiningBarge();
  void equip(IMiningLaser *);
  void mine(IAsteroid *) const;
};
#endif
