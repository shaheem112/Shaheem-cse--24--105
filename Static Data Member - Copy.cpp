#include <iostream>
using namespace std;

class test {
private:
    static int count;
public:
    test() { count++; }
    static int getcount() { return count; }
};

int test::count = 0;

int main() {
    test t1, t2, t3;
    cout << test::getcount();
    return 0;
}

