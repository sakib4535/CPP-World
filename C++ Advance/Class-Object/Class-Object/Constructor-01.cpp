#include <iostream>
#include <cmath>
using namespace std;

class Rhombus {
private:
    float diagonal1;
    float diagonal2;
public:
    Rhombus(){
        diagonal1 = 1;
        diagonal2 = 1;
    }

    Rhombus(float d1, float d2){
        diagonal1 = d1;
        diagonal2 = d2;
    }

    float areas() {
        return (diagonal1 * diagonal2) / 2.0;
    }
};

int main(){
    Rhombus rhombus1;
    Rhombus rhombus2(5,4);

    cout << "Area of rhombus1: " << rhombus1.areas() << endl;
    cout << "Area of rhombus2: " << rhombus2.areas() << endl;

    return 0;
}