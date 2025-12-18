class derived : public base {
public:
    void show() {
        base::show();
        cout << "Derived function\n";
    }
};

