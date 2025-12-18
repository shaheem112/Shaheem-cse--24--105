// ex8_5.cpp
#include <iostream>
using namespace std;

class Int {
private:
    int i;
public:
    Int(int a=0) : i(a) {}

    Int operator + (Int x) { return Int(i + x.i); }
    Int operator - (Int x) { return Int(i - x.i); }
    Int operator * (Int x) { return Int(i * x.i); }
    Int operator / (Int x) { return Int(i / x.i); }

    void show() const { cout << i; }
};

int main() {
    Int a(20), b(5), c;
    c = a / b;
    c.show();
    return 0;
}

