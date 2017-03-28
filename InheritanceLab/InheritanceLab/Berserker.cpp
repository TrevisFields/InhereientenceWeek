
#include "Berserker.h"



Berserker::Berserker(std::string name, int startingHealth, std::string axeType) :
Warrior(name, startingHealth, axeType)
{
}


Berserker::~Berserker()
{
}

std::string BattleCry()
{
  return "IM GOING TO RIP OUT YOUR G** **** SPINE!";
}
