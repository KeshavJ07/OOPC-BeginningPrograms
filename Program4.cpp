#include <iostream> // This is a property manager program. 
#include <cstring>
using namespace std;

class HouseDimensions{
private:
  string name;
  int height;
  int width;
  int length;
  int area;
  int volume;
  int price;
public:
  void setSpecs(int height_house, int width_house, int length_house, int house_Price){
    height = height_house;
    width = width_house;
    length = length_house;
    price = house_Price;
  }
  void set2D3D(){
     area = length * width;
     volume = length * width * height;
  }
  void setName(string Name_House){
    name = Name_House;
  }
  void print(){
    cout << name << " /" <<
     height << "/ " <<
     width << "/ " <<
     length << "/ " <<
     area << "/ " <<
     volume << "/ " <<
     price;
  }
};

using namespace std;
int main(){
  HouseDimensions Property1;
  Property1.setSpecs(40, 100, 20, 1000000);
  Property1.set2D3D();
  Property1.setName("3363 Burdock Place");
  Property1.print();

  return 0;
}
