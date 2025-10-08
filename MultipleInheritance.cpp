#include <iostream>
using namespace std;

class A {
public:
    void show() { cout << "Class A" << endl; }
};

class B : virtual public A {};
class C : virtual  public A {};
class D : public B, public C {}; // D inherits from both B and C

int main() {
    D obj;
    obj.show(); // Ambiguity: Which `show()` to call, B's or C's?
    return 0;
}