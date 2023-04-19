#include <iostream>
using namespace std;

// Base class
class Animal {
public:
  void eat() {
    cout << "I can eat!" << endl;
  }
};

// Derived class
class Dog : public Animal {
public:
  void bark() {
    cout << "I can bark!" << endl;
  }
};

int main() {
  // Create an object of the derived class
  Dog myDog;

  // Call a method of the base class
  myDog.eat();

  // Call a method of the derived class
  myDog.bark();

  return 0;
}
