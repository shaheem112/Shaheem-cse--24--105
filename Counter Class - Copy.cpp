#include <iostream>
using namespace std;

class Counter {
private:
    unsigned int count;
public:
    Counter() : count(0) {}
    void inc_count() { count++; }
    int get_count() const { return count; }
};

int main() {
    Counter c;
    c.inc_count();
    c.inc_count();
    cout << c.get_count();
    return 0;
}

