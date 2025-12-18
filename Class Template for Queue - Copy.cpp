// ex14_2.cpp
#include <iostream>
using namespace std;

const int MAX = 3;

template <class T>
class Queue {
private:
    T q[MAX];
    int head, tail;
public:
    Queue() : head(-1), tail(-1) {}

    void put(T val) {
        q[++tail] = val;
        if(tail == MAX-1) tail = -1;
    }

    T get() {
        T temp = q[++head];
        if(head == MAX-1) head = -1;
        return temp;
    }
};

int main()
{
    Queue<float> q;
    q.put(1.1);
    q.put(2.2);
    q.put(3.3);
    cout << q.get() << endl;
    return 0;
}

