// ex8_4.cpp
#include <iostream>
using namespace std;

class time {
private:
    int hrs, mins, secs;
public:
    time(int h=0, int m=0, int s=0) : hrs(h), mins(m), secs(s) {}

    time operator + (time t) {
        int s = secs + t.secs;
        int m = mins + t.mins;
        int h = hrs + t.hrs;

        if(s >= 60) { s -= 60; m++; }
        if(m >= 60) { m -= 60; h++; }

        return time(h, m, s);
    }

    void display() const {
        cout << hrs << ":" << mins << ":" << secs;
    }
};

int main() {
    time t1(5,59,59), t2(4,30,30), t3;
    t3 = t1 + t2;
    t3.display();
    return 0;
}

