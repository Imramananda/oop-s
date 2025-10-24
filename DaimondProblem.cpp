#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Base " << endl;
    }
    ~Base()
    {
        cout << "Dtor Base " << endl;
    }
};

class A : virtual public Base
{
public:
    A()
    {
        cout << "A " << endl;
    }
    ~A()
    {
        cout << "Dtor A " << endl;
    }
};

class B : virtual public Base
{
public:
    B()
    {
        cout << "B " << endl;
    }
    ~B()
    {
        cout << "Dtor B " << endl;
    }
};

class Derive : public A, public B
{
public:
    Derive()
    {
        cout << "Derive " << endl;
    }
    ~Derive()
    {
        cout << "Dervie Dtor " << endl;
    }
};

int main()
{
    cout << " -------Base------------ " << endl;
    Base b;
    cout << " -------A------------ " << endl;
    A a;
    cout << " -------B------------ " << endl;
    B obj;

     cout << " -------Derive------------ " << endl;
    Derive d;

    return 0;
}