#include <iostream>
#include <typeinfo> // Required for typeid
using namespace std;
class Base {
public:
    virtual ~Base() {} // Virtual destructor to make Base polymorphic
};
class Derived : public Base {
};
void checkType(Base* b) {
    // Using typeid to get type information
    cout << "Type of object: " << typeid(*b).name() << endl;

    // Using dynamic_cast for safe downcasting
    if (Derived* d = dynamic_cast<Derived*>(b)) {
        cout << "Object is of type Derived" << endl;
    } else {
        cout << "Object is not of type Derived" << endl;
    }
}
int main() {
    Base* b1 = new Base();
    Base* b2 = new Derived();

    checkType(b1); // Output: Type of object: Base
                   //         Object is not of type Derived

    checkType(b2); // Output: Type of object: Derived
                   //         Object is of type Derived

    delete b1;
    delete b2;

    return 0;
}