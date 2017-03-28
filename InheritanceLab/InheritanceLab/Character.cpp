#include "Character.h"



Character::Character(std::string name, int startingHealth) : _name(name),
_health(startingHealth), _weaponType(weaponType)
{
}


Character::~Character()
{
}

std::string Character::Attack()
{
  return _name + " attacks!\n";
}
