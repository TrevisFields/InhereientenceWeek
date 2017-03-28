#pragma once
#include "Warrior.h"


class Berserker : 	public Warrior 
{
private:
  
public:
  Berserker(std::string name, int startingHealth, std::string weaponType);
  ~Berserker();
  
  std::string BattleCry();
};
