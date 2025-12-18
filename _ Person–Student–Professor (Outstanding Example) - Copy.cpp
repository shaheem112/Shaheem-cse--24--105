// ex11_12.cpp
#include <iostream>
using namespace std;

class person {
protected:
    char name[40];
public:
    virtual bool isOutstanding() = 0;
    void getName() {
        cin >> name;
    }
};

class student : public person {
private:
    float gpa;
public:
    void getData() {
        getName();
        cin >> gpa;
    }
    bool isOutstanding() {
        return gpa > 3.5;
    }
};

class professor : public person {
private:
    int pubs;
public:
    void getData() {
        getName();
        cin >> pubs;
    }
    bool isOutstanding() {
        return pubs > 100;
    }
};

int main() {
    student s;
    s.getData();
    if(s.isOutstanding())
        cout << "Outstanding Student\n";
    return 0;
}

