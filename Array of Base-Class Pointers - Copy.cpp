// ex11_4.cpp
#include <iostream>
using namespace std;

class base {
public:
    virtual void show() {
        cout << "Base\n";
    }
};

class derived : public base {
public:
    void show() {
        cout << "Derived\n";
    }
};

int main() {
    base* b;
    derived d;
    b = &d;
    b->show();
    return 0;
}

