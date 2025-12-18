// ex8_11.cpp
#include <iostream>
using namespace std;

class Distance {
private:
    float meters;
public:
    Distance(float m=0) : meters(m) {}

    operator float() {
        return meters;
    }
};

int main() {
    Distance d(12.5);
    float x = d;
    cout << x;
    return 0;
}

