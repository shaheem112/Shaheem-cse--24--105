// ex11_8.cpp
#include <iostream>
using namespace std;

class base {
public:
    virtual ~base() {
        cout << "Base destroyed\n";
    }
};

class derived : public base {
public:
    ~derived() {
        cout << "Derived destroyed\n";
    }
};

int main() {
    base* b = new derived;
    delete b;
    return 0;
}

