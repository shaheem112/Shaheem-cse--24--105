// ex11_2.cpp
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

class student : public person {
private:
    float gpa;
public:
    void getData() {
        person::getData();
        cin >> gpa;
    }
    void putData() {
        person::putData();
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    student s;
    s.getData();
    s.putData();
    return 0;
}

