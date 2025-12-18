// ex8_3.cpp
#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char str[80];
public:
    String() { strcpy(str, ""); }
    String(char s[]) { strcpy(str, s); }

    String operator += (String s) {
        strcat(str, s.str);
        return *this;
    }

    void show() const {
        cout << str;
    }
};

int main() {
    String s1("Hello "), s2("World"), s3;
    s3 = s1 += s2;
    s3.show();
    return 0;
}

