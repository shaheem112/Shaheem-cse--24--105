// ex8_6.cpp
#include <iostream>
using namespace std;

class Counter {
private:
    int count;
public:
    Counter() : count(0) {}

    Counter operator ++ () {
        ++count;
        return *this;
    }

    void show() const {
        cout << count;
    }
};

int main() {
    Counter c;
    ++c;
    c.show();
    return 0;
}

