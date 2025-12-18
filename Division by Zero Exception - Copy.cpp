// ex15_8.cpp
#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 0;
    try {
        if(b == 0)
            throw b;
        cout << a / b;
    }
    catch(int) {
        cout << "Division by zero error";
    }
    return 0;
}

