#include <iostream>
#include "Warrior.h"
#include "Archer.h"
using namespace std;

void DisplayCharacterInfo(Character theCharacter);
void Attack(Character theCharacter);
int main()
{
  auto player1 = Character("bob", 100);
  DisplayCharacterInfo(player1);
  
  system("pause");
  
  auto player2 = Warrior("mike", 150, "longsword");
  DisplayCharacterInfo(player2);
  
  
  system("pause");
  
  auto player3 = Archer("legolas", 100, "cool elven bow");
  DisplayCharacterInfo(player3);
  
  system("pause");
  
  system("cls");
  Attack(player1);
  Attack(player2);
  Attack(player3);
  
  system("pause");
  return 0;
}

void DisplayCharacterInfo(Character theCharacter)
{
  cout << theCharacter.getName() << " has " << theCharacter.getHealth() << " life." << endl;
}

void Attack(Character theCharacter)
{
  cout << theCharacter.Attack();
}
