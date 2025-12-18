// ex15_10.cpp
#include <iostream>
using namespace std;

class Error {
};

int main()
{
    try {
        throw Error();
    }
    catch(Error) {
        cout << "User defined exception caught";
    }
    return 0;
}

