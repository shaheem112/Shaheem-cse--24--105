class base {
protected:
    int x;
public:
    base(int a) : x(a) {}
};

class derived : public base {
public:
    derived(int b) : base(b) {}
};

