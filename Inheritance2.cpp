#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A function" << endl;
    }
};

class B {
public:
    void showB() {
        cout << "Class B function" << endl;
    }
};

class C : public A, public B {
public:
    void showC() {
        cout << "Class C function" << endl;
    }
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    obj.showC();
    return 0;
}