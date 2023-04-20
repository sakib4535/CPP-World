#include <iostream>
using namespace std;

// Define a base class "Vehicle"
class Vehicle {
    protected:
        int wheels; // member variable 'wheels' of type is protected
    public:
        void setWheels(int w) { wheels = w; } // member function set the value of setWheels
        int getWheels() { return wheels; } // member function returns wheels
};

// Defining a derived class called "Car" which inherits from vehicle
class Car : public Vehicle {
    protected:
        string color;

    public:
        void setColor(string c) { color = c; }  // member fucntion sets the value of "color"
        string getColor() { return color; } // member fucntion returns
};

//Define Another derive class called "SportsCar" which inherits from "Car"
class SportsCar : public Car {
    private:
        bool convertible;
    public:
        void setConvertible(bool c) { convertible = c; } // // member function "setConvertible" sets the value of "convertible"
        bool isConvertible() { return convertible; }
};

int main() {

    // create an object "myCar" of class "Sportscar"
    SportsCar myCar;
    myCar.setWheels(4);
    myCar.setColor("red");
    myCar.setConvertible(true);
    cout << "My car has " << myCar.getWheels() << "Wheel is" << myCar.getColor() << ", and is";
    if (myCar.isConvertible()) {
    cout << " a convertible.";
  } else {
    cout << "not a convertible.";
  }
  return 0;
}