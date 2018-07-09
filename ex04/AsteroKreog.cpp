#include <string>
#include "AsteroKreog.hh"

AsteroKreog::AsteroKreog(){
}
AsteroKreog::~AsteroKreog(){
}

std::string AsteroKreog::beMined(IMiningLaser *p) const{
  p = p;
  std::cout << "ici" << std::endl;
  return "";
  }
std::string AsteroKreog::beMined(DeepCoreMiner *p) const{
  p = p;
  return "Sullite";
}
std::string AsteroKreog::beMined(StripMiner *p) const{
  p = p;
  return "Kreogium";
}
std::string AsteroKreog::getName() const{ return "AsteroKreog" ;}
