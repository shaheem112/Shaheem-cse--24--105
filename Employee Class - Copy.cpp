#include <iostream>
using namespace std;

class employee {
private:
    int empno;
    float salary;
public:
    void getdata() {
        cin >> empno >> salary;
    }
    void putdata() const {
        cout << empno << " " << salary << endl;
    }
};

int main() {
    employee e;
    e.getdata();
    e.putdata();
    return 0;
}

