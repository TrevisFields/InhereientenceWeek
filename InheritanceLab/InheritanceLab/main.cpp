#include <iostream>
#include "Warrior.h"
#include "Archer.h"
  //for got to add in the berserker header file and found the error i created after trying to implement my own code. 
#include "Berserker.h"
using namespace std;

void DisplayCharacterInfo(Character theCharacter);
void Attack(Character theCharacter);
void Taunt(Warrior theCharacter);


int main()
{
  auto player1 = Character("Kenshin", 100);
  DisplayCharacterInfo(player1);
  
  system("pause");
  
  auto player2 = Warrior("Dale", 150, "Long sword");
  DisplayCharacterInfo(player2);

  system("pause");
  
  auto player3 = Archer("Evangeline", 100, "Elven bow");
  DisplayCharacterInfo(player3);
  system("pause");
  
  auto player4 = Berserker("Grugelor", 400, "Giants axe");
  DisplayCharacterInfo(player4);
  system("pause");
  
  system("cls");
  Attack(player1);
  Attack(player2);
  //Displays the taunt message for the Warrior class.
  Taunt(player2);
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

void Taunt(Warrior theCharacter)
{
  cout << theCharacter.Taunt();
}
