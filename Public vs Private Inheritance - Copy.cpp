class A {
protected:
    int x;
};

class B : public A {
public:
    void set(int a) { x = a; }
};

