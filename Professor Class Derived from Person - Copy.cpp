// ex11_3.cpp
#include <iostream>
using namespace std;

class person {
protected:
    char name[40];
public:
    virtual void getData() {
        cin >> name;
    }
    virtual void putData() {
        cout << "Name: " << name << endl;
    }
};

class professor : public person {
private:
    int publications;
public:
    void getData() {
        person::getData();
        cin >> publications;
    }
    void putData() {
        person::putData();
        cout << "Publications: " << publications << endl;
    }
};

int main() {
    professor p;
    p.getData();
    p.putData();
    return 0;
}

