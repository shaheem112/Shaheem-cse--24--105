// ex15_11.cpp
#include <iostream>
using namespace std;

void test()
{
    throw 100;
}

int main()
{
    try {
        test();
    }
    catch(int e) {
        cout << "Caught: " << e;
    }
    return 0;
}

