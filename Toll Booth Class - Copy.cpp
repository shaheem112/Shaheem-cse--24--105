// ex6_2.cpp
#include <iostream>
using namespace std;

class tollBooth {
private:
    unsigned int totalCars;
    double totalCash;
public:
    tollBooth() : totalCars(0), totalCash(0.0) {}

    void payingCar() {
        totalCars++;
        totalCash += 0.5;
    }

    void nopayCar() {
        totalCars++;
    }

    void display() const {
        cout << "Cars: " << totalCars << endl;
        cout << "Cash: $" << totalCash << endl;
    }
};

int main() {
    tollBooth tb;
    tb.payingCar();
    tb.nopayCar();
    tb.payingCar();
    tb.display();
    return 0;
}

