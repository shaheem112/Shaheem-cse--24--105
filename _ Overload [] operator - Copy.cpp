// ex8_10.cpp
#include <iostream>
using namespace std;

class safearray {
private:
    int arr[10];
public:
    int& operator [] (int n) {
        return arr[n];
    }
};

int main() {
    safearray sa;
    sa[0] = 100;
    cout << sa[0];
    return 0;
}

