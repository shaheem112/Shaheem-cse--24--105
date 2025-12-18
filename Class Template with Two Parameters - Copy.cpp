// ex14_4.cpp
#include <iostream>
using namespace std;

template <class T, class U>
class pairval {
private:
    T x;
    U y;
public:
    pairval(T a, U b) : x(a), y(b) {}
    void display() {
        cout << x << " " << y;
    }
};

int main()
{
    pairval<int, float> p(10, 5.5);
    p.display();
    return 0;
}

