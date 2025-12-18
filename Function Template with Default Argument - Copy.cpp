// ex14_6.cpp
#include <iostream>
using namespace std;

template <class T>
T add(T a, T b = 10)
{
    return a + b;
}

int main()
{
    cout << add(5) << endl;
    cout << add(5, 15);
    return 0;
}

