// ex9_1.cpp
#include <iostream>
#include <string>
using namespace std;

class publication {
protected:
    string title;
    float price;
public:
    void getdata() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }
    void putdata() const {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class book : public publication {
private:
    int pages;
public:
    void getdata() {
        publication::getdata();
        cout << "Enter pages: ";
        cin >> pages;
    }
    void putdata() const {
        publication::putdata();
        cout << "Pages: " << pages << endl;
    }
};

class tape : public publication {
private:
    float time;
public:
    void getdata() {
        publication::getdata();
        cout << "Enter playing time: ";
        cin >> time;
    }
    void putdata() const {
        publication::putdata();
        cout << "Playing Time: " << time << endl;
    }
};

int main() {
    book b;
    tape t;
    b.getdata();
    t.getdata();
    b.putdata();
    t.putdata();
    return 0;
}

