#include <iostream>
#include <cstring>
using namespace std;

class CarSpecs{
public:
  CarSpecs(int year, string name, double cost, int miles){
    modelYear = year;
    modelName = name;
    price = cost;
    milesTravelled = miles;
  }
  int modelYear;
  string modelName;
  double price;
  int milesTravelled;
};

void print(CarSpecs &car){
  cout << car.modelYear << "/" << car.modelName << "/" << car.price << "/"
  << car.milesTravelled;
}

int main(){
  CarSpecs Car1(1988, "Honda", 3563.45, 120000);
  print(Car1);
  return 0;
}
