#include<iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {} // Virtual destructor to make Base polymorphic
};
class Derived : public Base {
    public:
void print() {
    cout << "Derived class" << endl;
}
};

int main()
{
    Base *b = new Derived();
    Base *b1 = new Base();
    Derived *d = dynamic_cast<Derived*>(b);
    if(d)
    {
        cout<<"Object is of type Derived"<<endl;
        d->print();
    }
    else
    {
        cout<<"Object is not of type Derived"<<endl;
    }
    Derived *d1 = dynamic_cast<Derived*>(b1);
    if(d1)
    {
        cout<<"Object is of type Derived"<<endl;
        d1->print();
    }
    else
    {
        cout<<"Object is not of type Derived"<<endl;
        d1->print();
    }   
    return 0;
}