// Base Class (Parent)

#include<iostream>
using namespace std;

class Area {
    public:
        void myFunction(){
        cout << "Content in parent Class";
    }
};

// Derived Class (Child)
class AreaCode : public Area {
    public: 
        void display (){
            cout << "Zigatola" << endl;
        }
};

//Derived Class () grand Child:

class AreaWeather: public Area{
    public:
        void displayWeather(){
            cout << "Good" << endl;
        }
};

int main(){
    AreaWeather myObj1;
    AreaCode myObj2;

    myObj1.displayWeather();
    myObj2.display();

}