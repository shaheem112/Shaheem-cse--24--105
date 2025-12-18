// ex11_9.cpp
#include <iostream>
using namespace std;

class base {
public:
    virtual void func() {
        cout << "Base\n";
    }
};

class derived : public base {
public:
    void func() {
        cout << "Derived\n";
    }
};

int main() {
    base* b = new derived;
    b->func();
    delete b;
    return 0;
}

