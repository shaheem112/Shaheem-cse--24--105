// ex14_3.cpp
#include <iostream>
using namespace std;

template <class T1, class T2>
void show(T1 a, T2 b)
{
    cout << a << " " << b;
}

int main()
{
    show(10, 5.5);
    return 0;
}

