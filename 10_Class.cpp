#include <iostream>
using namespace std;
class Car
{
  int ok = 1; // default is private
private:      // oject can't access
  int salary; // Use getters and setters to access and update private variables

protected: // only child class can access
  int how_much;

public:
  string brand;
  string model;
  int year;
  int speed(int maxSpeed);
  void helloworld()
  {
    cout << "hello world" << endl;
  }
  // constructor declaration
  Car(string x, string y, int z); // it will execute when object is created
  void setSalary(int s)           // setter
  {
    salary = s;
  }
  int getSalary() // getter
  {
    return salary;
  }
};

int Car::speed(int maxSpeed)
{
  return maxSpeed;
}
Car::Car(string x, string y, int z) // constructor function
{
  brand = x;
  model = y;
  year = z;
}
class childd : public Car
{
protected:
  int ok = 1;

public:
  childd(string x, string y, int z) : Car(x, y, z) {} // 初始化基类的构造函数
  int bouns;
  int get_how_much()
  {
    return how_much;
  }
  void set_how_much(int x)
  {
    how_much = x;
  }
};
int main()
{
  Car carObj1("BMW", "X5", 1999); // Create an object of Car

  Car carObj2("Ford", "Mustang", 1969); // Create another object of Car

  // Print attribute values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;

  // test speed
  cout << "carObj1 speed = " << carObj1.speed(200) << endl;

  // test hello world
  carObj1.helloworld();

  // test private
  carObj1.setSalary(50000);
  cout << "carObj1 salary= " << carObj1.getSalary() << endl;

  // test protected
  childd childdObj("BMW", "X5", 1999);
  childdObj.set_how_much(100);
  cout << "childdObj how_much= " << childdObj.get_how_much() << endl;
}