#include <iostream>
using namespace std;

class base {
public:
    base() { cout << "Base\n"; }
};

class derived : public base {
public:
    derived() { cout << "Derived\n"; }
};

int main() {
    derived d;
    return 0;
}

