#include <iostream>
using namespace std;

class alpha {
private:
    int data;
public:
    alpha(int d) : data(d) {}
    void show() const { cout << data; }
};

int main() {
    alpha a(5);
    a.show();
    return 0;
}

