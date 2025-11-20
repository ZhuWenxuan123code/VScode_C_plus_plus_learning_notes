#include <iostream>
using namespace std;

class Vehicle
{
public:
  string brand = "Ford";
  void honk()
  {
    cout << "Tuut, tuut! \n";
  }
};
class Vehicle1
{
public:
  string brand1 = "Ford";
  void honk1()
  {
    cout << "Tuut, tuut! \n";
  }
};

class Car : public Vehicle, public Vehicle1
{
public:
  string model = "Mustang";
};
int main()
{
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}