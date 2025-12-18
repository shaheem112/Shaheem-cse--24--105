// ex11_6.cpp
#include <iostream>
using namespace std;

class shape {
public:
    virtual void draw() = 0;
};

class circle : public shape {
public:
    void draw() {
        cout << "Drawing Circle\n";
    }
};

int main() {
    shape* s;
    circle c;
    s = &c;
    s->draw();
    return 0;
}

