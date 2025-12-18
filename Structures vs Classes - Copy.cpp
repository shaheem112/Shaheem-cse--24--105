#include <iostream>
using namespace std;

struct s {
    int x;
};

class c {
    int x;
};

int main() {
    s s1;
    s1.x = 10;   // allowed

    // c c1;
    // c1.x = 10; // NOT allowed (private by default)

    cout << s1.x;
    return 0;
}

