#include <iostream>
#include <string>
using namespace std;
class Person {
    public:
        string name;
        int age;

        void printInfo() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main() {
    Person person1;
    Person person2;

    person1.name = "Jonathan Bitch";
    person1.age = 24;

    person2.name = "Jane Watson";
    person2.age = 41;

    cout << "Person 2: " << endl;
    person2.printInfo();

    return 0;
}