#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    Distance() : feet(0), inches(0.0) {}
    Distance(int f, float i) : feet(f), inches(i) {}

    void showdist() const {
        cout << feet << "'-" << inches << "\"";
    }
};

int main() {
    Distance d1(5, 10.5);
    d1.showdist();
    return 0;
}

