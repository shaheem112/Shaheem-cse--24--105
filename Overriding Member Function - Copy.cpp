#include <iostream>
using namespace std;

class base {
public:
    void show() { cout << "Base class\n"; }
};

class derived : public base {
public:
    void show() { cout << "Derived class\n"; }
};

int main() {
    derived d;
    d.show();
    return 0;
}


