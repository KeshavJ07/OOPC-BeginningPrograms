#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

class DateClass{
private:
  int day;
  int month;
  int year;

public:
  void setDay(int t_day, int t_month, int t_year){
    day = t_day;
    month = t_month;
    year = t_year;
  }

  void print(){
    cout << day << "/" << month << "/" << year;
  }
};

int main(){
  DateClass today_Date;
  today_Date.setDay(15,8,2021);
  today_Date.print();
  return 0;
}
