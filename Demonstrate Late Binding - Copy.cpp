// ex11_5.cpp
#include <iostream>
using namespace std;

class A {
public:
    virtual void display() {
        cout << "Class A\n";
    }
};

class B : public A {
public:
    void display() {
        cout << "Class B\n";
    }
};

int main() {
    A* a;
    B b;
    a = &b;
    a->display();
    return 0;
}

