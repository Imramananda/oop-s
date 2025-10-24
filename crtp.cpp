#include<iostream>
using namespace std;

template <typename Derived>
class Base {
public:
    void interface() {
        static_cast<Derived*>(this)->implementation();
    }
};

class Derived : public Base<Derived> {
public:
    void implementation() { cout << "Derived impl\n"; }
};

int main() {
    Derived d;
    d.interface(); // Derived impl

    return 0;
}
