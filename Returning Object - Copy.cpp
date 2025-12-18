#include <iostream>
using namespace std;

class test {
private:
    int x;
public:
    test(int a = 0) : x(a) {}
    test add(test t) {
        return test(x + t.x);
    }
    void show() const { cout << x; }
};

int main() {
    test t1(5), t2(7), t3;
    t3 = t1.add(t2);
    t3.show();
    return 0;
}

