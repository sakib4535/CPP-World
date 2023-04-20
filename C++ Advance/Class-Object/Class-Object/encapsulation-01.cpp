#include<iostream>
using namespace std;

class Employee {
    private:
        // private Attributes
        string name;
        int ID;
    
    public:
        // setter function
        void setID(int s) { ID = s;}
        // Getter 
        int getID(){
            return ID;
        }

};

int main() {
    Employee myObj;
    myObj.setID(22312);
    cout << myObj.getID();
    return 0;
}