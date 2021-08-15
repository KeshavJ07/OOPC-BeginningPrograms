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
  Human Random(188, 80, "Bachelors", "Nice");
  Random.print();
  return 0;
}
