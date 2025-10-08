#include<iostream>
using namespace std;

class A
{
    virtual void aa()
    {}
};
int main()
{
    cout<<sizeof(A)<<endl;
}