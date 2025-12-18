// ex8_9.cpp
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
public:
    Distance(int f=0) : feet(f) {}

    bool operator < (Distance d) {
        return feet < d.feet;
    }
};

int main() {
    Distance d1(5), d2(10);
    if(d1 < d2)
        cout << "d1 is smaller";
    return 0;
}

