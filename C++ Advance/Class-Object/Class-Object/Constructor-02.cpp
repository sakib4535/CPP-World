#include <iostream>
#include <cmath>

using namespace std;

enum RhombusType { EQUILATERAL, ACUTE, OBTUSE, INVALID };

class Rhombus {
private:
    float diagonal1;
    float diagonal2;

public:
    Rhombus() {
        diagonal1 = 1;
        diagonal2 = 1;
    }

    Rhombus(float d1, float d2) {
        diagonal1 = d1;
        diagonal2 = d2;
    }

    float area() {
        return (diagonal1 * diagonal2) / 2.0;
    }

    RhombusType type() {
        float angle = atan2(diagonal1, diagonal2);
        if (angle > 0) {
            return ACUTE;
        }
        else if (angle < 0) {
            return OBTUSE;
        }
        else {
            if (diagonal1 == diagonal2) {
                return EQUILATERAL;
            }
            else {
                return INVALID;
            }
        }
    }
};

int main() {
    Rhombus rhombus1; // create a Rhombus object using default constructor
    Rhombus rhombus2(5, 7); // create a Rhombus object using parameterized constructor

    cout << "Area of rhombus1: " << rhombus1.area() << endl;
    cout << "Type of rhombus1: " << rhombus1.type() << endl;

    cout << "Area of rhombus2: " << rhombus2.area() << endl;
    cout << "Type of rhombus2: " << rhombus2.type() << endl;

    return 0;
}
