#include <iostream>
using namespace std;

class sample {
private:
    int x;
public:
    sample(int a) : x(a) {}
    int get() const { return x; }
};

void display(sample s) {
    cout << s.get();
}

int main() {
    sample s(20);
    display(s);
    return 0;
}

