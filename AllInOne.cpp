#include<iostream>
#include<string.h>
using namespace std;

class test{
      public:
        int *i;
        char *ptr;

        test(){}
        test(int a,const char *c)
        {
                i=new int;
                *i=a;
                int size=strlen(c);
                ptr=new char[size];
                *ptr=*c;
        }
        test operator+(const test &obj)
        {
                test t3;
                *(t3.i)=*i+*(obj.i);
                *(t3.ptr)=*ptr+*(obj.ptr);
                return t3;
        }
        friend ostream & operator<<(ostream & out,test t3);
};

ostream & operator<<(ostream & out , test t3)
{
        out<<*i<<" "<<ptr<<endl;
        out<<*(t3.i)<<" "<<*(t3.ptr)<<endl;
        return out;
}

int main()
{
        test t1(10,"Hello ");
        //test *t2 = new test(20, "World");
        test t2(20,"yadav ");
        test t3;
        t3 = t1 + t2;
        //delete t2;
        cout<<t1<<t3<<endl;


        return 0;
}
