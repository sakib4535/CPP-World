#include<iostream>
using namespace std;

class Equation {
    protected:
        int x;
    public:
        Equation(int x0 = 0){
            x = x0;
        }
        virtual int solve() {
            return 0;
        }
};


class LinearEquation : public Equation {
    private:
        int a;
        int b;
    public:
        LinearEquation(int x0=0, int a0=0, int b0=0) :Equation(x0) {
            a = a0;
            b = b0;
        }
        int solve(){
            return a*x + b;
        }
};

class QuadraticEquation : public Equation {
    private:
        int a;
        int b;
        int c;
    public:
        QuadraticEquation(int x0=0, int a0=0, int b0=0, int c0=0) : Equation(x0){
            a = a0;
            b = b0;
            c = c0;
        }
        int solve(){
            return a*x*x + b*x + c;
        }
};

int main(){
    Equation *e1, *e2;
    LinearEquation l(5,2,3);
    QuadraticEquation q(3,1,2,1);
    e1 = &l;
    e2 = &q;
    cout << "Solution to linear euqation l: " << e1->solve() << endl;
    cout << "Solution to quadratic equation q: " << e2->solve() << endl;
    return 0;

}