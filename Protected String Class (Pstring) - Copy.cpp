// ex9_2.cpp
#include <iostream>
#include <cstring>
using namespace std;

class String {
protected:
    static const int SZ = 80;
    char str[SZ];
public:
    String() { strcpy(str, ""); }
    String(char s[]) { strcpy(str, s); }
    void display() const { cout << str; }
};

class Pstring : public String {
public:
    Pstring(char s[]) {
        if(strlen(s) < SZ)
            strcpy(str, s);
        else {
            strncpy(str, s, SZ-1);
            str[SZ-1] = '\0';
        }
    }
};

int main() {
    Pstring ps("This string is too long and will be truncated safely");
    ps.display();
    return 0;
}

