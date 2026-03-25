#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A function" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B function" << endl;
    }
};

class C {
public:
    void showC() {
        cout << "Class C function" << endl;
    }
};

class D : public B, public C {
public:
    void showD() {
        cout << "Class D function" << endl;
    }
};

int main() {
    D obj;

    obj.showA();
    obj.showB();
    obj.showC();
    obj.showD();

    return 0;
}
