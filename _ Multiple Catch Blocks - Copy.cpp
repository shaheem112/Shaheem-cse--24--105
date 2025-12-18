// ex15_9.cpp
#include <iostream>
using namespace std;

int main()
{
    try {
        throw 5.5;
    }
    catch(int) {
        cout << "Integer exception";
    }
    catch(double) {
        cout << "Double exception";
    }
    return 0;
}

