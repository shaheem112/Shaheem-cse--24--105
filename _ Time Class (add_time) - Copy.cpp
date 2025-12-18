// ex6_3.cpp
#include <iostream>
using namespace std;

class time {
private:
    int hrs, mins, secs;
public:
    time() : hrs(0), mins(0), secs(0) {}
    time(int h, int m, int s) : hrs(h), mins(m), secs(s) {}

    void add_time(time t1, time t2) {
        secs = t1.secs + t2.secs;
        mins = t1.mins + t2.mins;
        hrs  = t1.hrs  + t2.hrs;

        if(secs >= 60) { secs -= 60; mins++; }
        if(mins >= 60) { mins -= 60; hrs++; }
    }

    void display() const {
        cout << hrs << ":" << mins << ":" << secs;
    }
};

int main() {
    time t1(5,59,59), t2(4,30,30), t3;
    t3.add_time(t1, t2);
    t3.display();
    return 0;
}

