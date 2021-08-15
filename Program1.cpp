#include <iostream>
#include <cstring>
using namespace std;

class Employee{
public:
  int age;
  string name;
  int wages;
};

void print(Employee &Worker){
  cout << Worker.age << "/" << Worker.name << "/" << Worker.wages;
}

void SetEmployee(int age, string name, int wages, Employee &Worker){
  Worker.age = age;
  Worker.name = name;
  Worker.wages = wages;
}

int main(){
  Employee Number1;
  SetEmployee(20, "Keshav", 22, Number1);
  print(Number1);
  return 0;
}
