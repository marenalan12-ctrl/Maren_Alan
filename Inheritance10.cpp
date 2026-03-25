#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Display of Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Display of Derived class" << endl;
    }
};

int main() {
    Base* ptr;
    Derived obj;

    ptr = &obj;
    ptr->display();   
    return 0;
}