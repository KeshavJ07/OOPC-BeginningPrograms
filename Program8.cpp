#include <iostream>
#include <cstring>
using namespace std;

class Game{
private:
  int lives;
  int strength;
  int agility;
  int technology;
public:
  Game(int game_lives, int game_strength, int game_agility, int game_technology){
    lives = game_lives;
    strength = game_strength;
    agility = game_agility;
    technology = game_technology;
  }
  void  get_lives(){
    return lives;
  }
  void get_strength(){
    return strenght;
  }
  void get_agility(){
    return agility;
  }
  void get_technology(){
    return technology;
  }
  void print(){
    cout << lives << "/"
    << strength << "/"
    << agility << "/"
    << technology;
  }
};

int main(){
  Game GrandMafia(1000, 1000, 1000, 1000);
  GrandMafia.print(); 
  return 0;
}
