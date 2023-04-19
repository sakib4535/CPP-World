#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void printDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person person;
    person.setName("Gotcha Mail");
    person.setAge(30);

    person.printDetails();

    return 0;
}
