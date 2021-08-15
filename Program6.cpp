#include <iostream>
#include <cstring>
using namespace std;

class Human{
private:
  int height;
  int weight;
  string educationLevel;
  string emotion;

public:
  Human(int Human_height, int Human_weight, string Human_educationLevel,
  string Human_emotion){
    height = Human_height;
    weight = Human_weight;
    educationLevel = Human_educationLevel;
    emotion = Human_emotion;
  }
  void print(){
    cout << height <<
    "\n" << weight << "\n" << educationLevel << "\n" << emotion;
  }
};

int main(){
  Human Keshav(178, 120, "Bachelors", "Meh");
  Keshav.print();
  return 0;
}
