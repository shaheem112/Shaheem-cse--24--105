// ex8_8.cpp
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    Distance(int f=0, float i=0) : feet(f), inches(i) {}

    bool operator == (Distance d) {
        return (feet == d.feet && inches == d.inches);
    }
};

int main() {
    Distance d1(5,6), d2(5,6);
    if(d1 == d2)
        cout << "Equal";
    else
        cout << "Not Equal";
    return 0;
}

