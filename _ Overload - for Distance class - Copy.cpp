// ex8_2.cpp
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    Distance() : feet(0), inches(0) {}
    Distance(int f, float i) : feet(f), inches(i) {}

    Distance operator - (Distance d) {
        int f = feet - d.feet;
        float i = inches - d.inches;
        if(i < 0) {
            i += 12;
            f--;
        }
        return Distance(f, i);
    }

    void show() const {
        cout << feet << "'-" << inches << "\"";
    }
};

int main() {
    Distance d1(10, 6), d2(3, 9), d3;
    d3 = d1 - d2;
    d3.show();
    return 0;
}

