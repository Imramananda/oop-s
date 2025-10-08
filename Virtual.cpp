#include<iostream>
using namespace std;

class A
{
    public:
    int id;
    A(int id):id(id)
    {
        cout<<"A const"<<id<<endl;
    }
    A()
    {
        cout<<"default const of A"<<endl;
    }
    virtual ~A()
    {
        cout<<"A destr"<<endl;
    }
};
class B: public A
{
    public:
    B(int id):A(id)
    {
        cout<<"B const"<<id<<endl;
    }
    B()
    {
        cout<<"default constr of B"<<endl;
    }
    ~B()
    {
        cout<<"B destr"<<id<<endl;
    }    
};

int main()
{
    // A a(1);
    // cout<<"Object "<<endl;
    // B b(2);

    A *ptr = new B;
    delete ptr;
    return 0;
}