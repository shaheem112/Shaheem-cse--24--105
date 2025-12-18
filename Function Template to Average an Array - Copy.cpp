// ex14_1.cpp
#include <iostream>
using namespace std;

template <class T>
T avg(T* arr, int n)
{
    T sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return sum / n;
}

int main()
{
    int a[] = {1,2,3,4,5};
    cout << avg(a,5);
    return 0;
}

