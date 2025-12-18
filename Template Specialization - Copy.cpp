// ex14_5.cpp
#include <iostream>
using namespace std;

template <class T>
class Test {
public:
    void show() {
        cout << "Generic Template\n";
    }
};

template <>
class Test<int> {
public:
    void show() {
        cout << "Specialized Template for int\n";
    }
};

int main()
{
    Test<float> t1;
    Test<int> t2;
    t1.show();
    t2.show();
    return 0;
}

