#pragma once
#include "Warrior.h"


class Berserker : 	public Warrior 
{
private:
  
public:
  Berserker(std::string name, int startingHealth, std::string axeType);
  ~Berserker();
  
  std::string BattleCry();
};
