#include <iostream>
using namespace std;

class sample {
private:
    int x;
public:
    sample(int a) : x(a) {}
    int getx() const { return x; }
};

int main() {
    const sample s(10);
    cout << s.getx();
    return 0;
}

