// ex8_12.cpp
#include <iostream>
using namespace std;

class Distance {
private:
    float meters;
public:
    Distance(float m) : meters(m) {}
    void show() const { cout << meters; }
};

int main() {
    Distance d = 15.7;
    d.show();
    return 0;
}

