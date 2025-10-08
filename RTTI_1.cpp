#include<iostream>
#include<string.h>
#include<typeinfo> // Required for typeid
using namespace std;
class A{
    public:
    virtual ~A(){};
};
class B : public A{};

int main ()
{
    A b;
    B d;
    A *pb = new B;
    A *ptr= &d;
    cout<<"Type of object: "<<typeid(b).name()<<endl;
    cout<<"Type of object: "<<typeid(d).name()<<endl;
    cout<<"Type of object: "<<typeid(*pb).name()<<endl;
    cout<<"Type of object: "<<typeid(*ptr).name()<<endl;

    delete pb;
    delete ptr;
    return 0;

}