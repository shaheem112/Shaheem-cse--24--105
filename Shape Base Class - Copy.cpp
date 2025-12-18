// ex9_5.cpp
#include <iostream>
using namespace std;

class shape {
protected:
    int x, y;
public:
    void getdata() { cin >> x >> y; }
};

class rectangle : public shape {
public:
    void area() { cout << "Area = " << x * y; }
};

int main() {
    rectangle r;
    r.getdata();
    r.area();
    return 0;
}

