// ex11_1.cpp
#include <iostream>
using namespace std;

class person {
protected:
    char name[40];
public:
    void getName() {
        cin >> name;
    }
    virtual void getData() {
        cout << "Base getData\n";
    }
    virtual void putData() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    person p;
    p.getName();
    p.putData();
    return 0;
}

