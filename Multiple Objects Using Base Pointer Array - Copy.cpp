// ex11_11.cpp
#include <iostream>
using namespace std;

class base {
public:
    virtual void show() = 0;
};

class A : public base {
public:
    void show() {
        cout << "Class A\n";
    }
};

class B : public base {
public:
    void show() {
        cout << "Class B\n";
    }
};

int main() {
    base* arr[2];
    A a;
    B b;
    arr[0] = &a;
    arr[1] = &b;
    arr[0]->show();
    arr[1]->show();
    return 0;
}

