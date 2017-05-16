#include "Warrior.h"



Warrior::Warrior(std::string name, int startingHealth, std::string swordType) :
Character(name, startingHealth)
{
}


Warrior::~Warrior()
{
}

std::string Warrior::Taunt()
{
  return "IM GOING TO RIP OUT YOUR G** **** SPINE!!" ;
}

