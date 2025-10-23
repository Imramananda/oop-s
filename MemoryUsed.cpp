#include<iostream>
using namespace std;
class A {
public:
    A() { std::cout << "A ctor\n"; }
    virtual void f()
    {
        cout<<"F of Base "<<endl;
    }
    virtual ~A() { std::cout << "A dtor\n"; }
};
class B : public A {
public:
    B() { std::cout << "B ctor\n"; }
    void f()
    {
        cout<<"F from dervie "<<endl;
    }
    ~B() { std::cout << "B dtor\n"; }
};

int main() {
    A* obj = new B();
    delete obj; // Derive to Base 
    obj->f(); // Obj is dangling poointer 
    A obj1;
    cout<<"Object of B"<<endl;
    B ob;
    return 0;
}
// destructon happen in reverse order of construction in main function as well so first B object ob will destroy and then A object obj1