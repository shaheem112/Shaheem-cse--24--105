// ex8_7.cpp
#include <iostream>
using namespace std;

class Counter {
private:
    int count;
public:
    Counter() : count(0) {}

    Counter operator ++ (int) {
        Counter temp = *this;
        count++;
        return temp;
    }

    void show() const {
        cout << count;
    }
};

int main() {
    Counter c;
    c++;
    c.show();
    return 0;
}

