#include "DeepCoreMiner.hh"
DeepCoreMiner::DeepCoreMiner(){};
DeepCoreMiner::~DeepCoreMiner(){};

void DeepCoreMiner::mine(IAsteroid *s){
  std::cout << "* mining deep ... got "<< s->beMined(this)<<" ! *" << std::endl;
};
