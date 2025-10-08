#include<iostream>
using namespace std;

class Base
{
    public:
    Base()
    {
        cout<<"Base "<<endl;
    }
    ~Base()
    {
        cout<<"~Base"<<endl;
    }
};

class A: virtual public Base
{
    public:
    A()
    {
        cout<<"A "<<endl;
    }
    ~A()
    {
        cout<<"~A"<<endl;
    }
};
class B: virtual public Base
{
    public:
    B()
    {
        cout<<"B "<<endl;
    }
    ~B()
    {
        cout<<"~B"<<endl;
    }
};

class C: public A,B
{
    public:
    C()
    {
        cout<<"C "<<endl;
    }
    ~C()
    {
        cout<<"~C"<<endl;
    } 
};


int main()
{
    C c;
    return 0;
}