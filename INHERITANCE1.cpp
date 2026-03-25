#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "This is Base class function" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "This is Derived class function" << endl;
    }
};

int main() {
    Derived obj;
    obj.show();
    obj.display();
    return 0;
}
