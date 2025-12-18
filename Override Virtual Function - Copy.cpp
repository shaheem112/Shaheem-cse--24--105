// ex11_10.cpp
#include <iostream>
using namespace std;

class parent {
public:
    virtual void show() {
        cout << "Parent\n";
    }
};

class child : public parent {
public:
    void show() {
        cout << "Child\n";
    }
};

int main() {
    parent* p;
    child c;
    p = &c;
    p->show();
    return 0;
}

