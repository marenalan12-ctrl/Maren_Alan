#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;   
};

class Rectangle : public Shape {
    int l, b;

public:
    Rectangle(int x, int y) {
        l = x;
        b = y;
    }

    void area() {
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

int main() {
    Rectangle r(5, 4);
    r.area();
    return 0;
}