#include <iostream>
using namespace std;

class MyClass{
    public:
        int myNum; // Declare a public number variable called nyNum
};

int main(){
    
    MyClass myObj; // create an object called  myobj of the MyClass

    myObj.myNum = 15; // Set the myNum member variable of myObj to 15

    cout << myObj.myNum;  // Output the value of myObj.myNum to the console

    return 0;
}