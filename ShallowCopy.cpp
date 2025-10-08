#include<iostream>
using namespace std;
class A
{
    public:
    int *data;
    A(int d):data(new int(d))
    {
        cout<<"Constr "<<data <<" -value - "<<*data<<endl;
    }
    ~A()
    {
        delete data;
        cout<<"Destructor "<<endl;
    }
    A(const A& a)
    {
        //data = a.data; // shalolow copy 2 times destructor call which leads to unexpected and same memry used by 2 object
        data =new int(*a.data); //deep copy , new memory for new object
        cout<<"Copy constructor "<<data <<" -value- "<<*data<<endl;
    }
    void print()
    {
        cout<<"Print "<<data<<" - value - "<<*data<<endl;
    }
};
int main()
{
    A a(20);
    A b=a;
    a.print();
    b.print();
    return 0;
} // namespace name
