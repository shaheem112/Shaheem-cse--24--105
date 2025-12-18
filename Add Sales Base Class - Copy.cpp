// ex9_3.cpp
#include <iostream>
using namespace std;

class sales {
protected:
    float sales_data[3];
public:
    void getdata() {
        for(int i=0;i<3;i++)
            cin >> sales_data[i];
    }
    void putdata() const {
        for(int i=0;i<3;i++)
            cout << sales_data[i] << " ";
        cout << endl;
    }
};

