#include <iostream>
#include <string>

class Employee {
  private:
    std::string name;
    int salary;

  public:
    Employee(std::string name, int salary) {
        this->name = name;
        this->salary = salary;
    }

    // getter method to retrieve employee's name
    std::string getName() const {
        return name;
    }

    // setter method to set employee's salary
    void setSalary(int newSalary) {
        if(newSalary >= 0) {
            salary = newSalary;
        }
    }

    // method to print employee details
    void printDetails() const {
        std::cout << "Employee name: " << name << std::endl;
        std::cout << "Employee salary: " << salary << std::endl;
    }
};

int main() {
    // Create a new employee
    Employee emp1("Sakib Imtiaz", 50000);

    // Access employee's name using the getter method
    std::cout << "Employee name: " << emp1.getName() << std::endl;

    // Try to set an invalid negative salary
    emp1.setSalary(-52123);

    // Print employee details using the printDetails method
    emp1.printDetails();

    // Set a valid salary
    emp1.setSalary(64131);

    // Print updated employee details
    emp1.printDetails();

    return 0;
}
