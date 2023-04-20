#include <iostream>
using namespace std;

class Array3D {
protected:
    int*** data;
    int size1, size2, size3;

public:
    Array3D(int s1, int s2, int s3) : size1(s1), size2(s2), size3(s3) {
        data = new int**[size1];
        for (int i = 0; i < size1; i++) {
            data[i] = new int*[size2];
            for (int j = 0; j < size2; j++) {
                data[i][j] = new int[size3];
            }
        }
    }

    virtual ~Array3D() {
        for (int i = 0; i < size1; i++) {
            for (int j = 0; j < size2; j++) {
                delete[] data[i][j];
            }
            delete[] data[i];
        }
        delete[] data;
    }

    virtual void setElement(int i, int j, int k, int value) {
        data[i][j][k] = value;
    }

    virtual int getElement(int i, int j, int k) {
        return data[i][j][k];
    }

    virtual void add(Array3D* other) = 0;
};

class SameShapeArray3D : public Array3D {
public:
    SameShapeArray3D(int s1, int s2, int s3) : Array3D(s1, s2, s3) {}

    virtual void add(Array3D* other) {
        SameShapeArray3D* otherSameShape = dynamic_cast<SameShapeArray3D*>(other);
        if (otherSameShape != NULL && otherSameShape->size1 == size1 && otherSameShape->size2 == size2 && otherSameShape->size3 == size3) {
            for (int i = 0; i < size1; i++) {
                for (int j = 0; j < size2; j++) {
                    for (int k = 0; k < size3; k++) {
                        data[i][j][k] += otherSameShape->data[i][j][k];
                    }
                }
            }
        }
        else {
            cout << "Error: Arrays are not the same shape!" << endl;
        }
    }
};

class DifferentShapeArray3D : public Array3D {
public:
    DifferentShapeArray3D(int s1, int s2, int s3) : Array3D(s1, s2, s3) {}

    virtual void add(Array3D* other) {
        cout << "Error: Arrays are not the same shape!" << endl;
    }
};

int main() {
    SameShapeArray3D a(2, 2, 2);
    a.setElement(0, 0, 0, 1);
    a.setElement(0, 0, 1, 2);
    a.setElement(0, 1, 0, 3);
    a.setElement(0, 1, 1, 4);
    a.setElement(1, 0, 0, 5);
    a.setElement(1, 0, 1, 6);
    a.setElement(1, 1, 0, 7);
    a.setElement(1, 1, 1, 8);

    SameShapeArray3D b(2, 2, 2);
    b.setElement(0, 0, 0, 1);
    b.setElement(0, 0, 1, 1);
    b.setElement(0, 1, 0, 1);
    b.setElement(0, 1, 1, 1);
    b.setElement(1, 0, 0, 1);
    b.setElement(1, 0, 1, 1);
    b.setElement(1, 1, 0, 1);
    b.setElement(1, 1, 1, 1);

    SameShapeArray3D c(2, 2, 2);
    c.setElement(0, 0, 0, 2);
    c.setElement(0, 0, 1, 3);
    c.setElement(0, 1, 0, 4);
    c.setElement(0, 1, 1, 5);
    c.setElement(1, 0, 0, 6);
    c.setElement(1, 0, 1, 7);
    c.setElement(1, 1, 0, 8);
    c.setElement(1, 1, 1, 9);

    DifferentShapeArray3D d(2, 2, 3);
    d.setElement(0, 0, 0, 1);
    d.setElement(0, 0, 1, 2);
    d.setElement(0, 0, 2, 3);
    d.setElement(0, 1, 0, 4);
    d.setElement(0, 1, 1, 5);
    d.setElement(0, 1, 2, 6);
    d.setElement(1, 0, 0, 7);
    d.setElement(1, 0, 1, 8);
    d.setElement(1, 0, 2, 9);
    d.setElement(1, 1, 0, 10);
    d.setElement(1, 1, 1, 11);
    d.setElement(1, 1, 2, 12);

    a.add(&b);
    a.add(&c);
    a.add(&d);

    delete &d;
    return 0;
}
