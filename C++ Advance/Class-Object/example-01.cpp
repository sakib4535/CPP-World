#include <iostream>

using namespace std;

class Rectangle {
    private:
        double length, width;

    public:
        void setLength(double l){
            length = 1;
        }

        void setWidth(double w){
            width = w;
        }

        double getArea(){
            return length * width;
        }

        double getPerimeter(){
            cout << "Length: " << length << endl;
            cout << "Width: " << width << endl;
        }

        void printDimensions() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        }
};

int main(){
    Rectangle rect;
    rect.setLength(5);
    rect.setWidth(3);

    cout << "Area: " << rect.getArea() << endl;
    cout << "Perimeter: " << rect.getPerimeter() << endl;
    rect.printDimensions();
}