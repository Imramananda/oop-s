#include <iostream>
#include <malloc.h>
#include <new> // Required for std::bad_alloc
using namespace std;

// Overload global new operator
void *operator new(size_t size)
{
    cout << "New operator " << size << endl;
    void *p = malloc(size);
    cout << p << endl;
    if (!p)
        throw bad_alloc(); // Throw exception if malloc fails
    return p;
}

// Overload global delete operator
void operator delete(void *p) noexcept
{
    if (p)
    { // Check for nullptr
        cout << "Delete operator " << p << endl;
        free(p);
    }
}

class A
{
    // int a;
    // int b;

public:
    // A(int d)//: a(d), b(0) // Initialize b to 0
    // {
    //     cout << "Constructor " << a << endl;
    // }
    A()
    {
        cout<<"Constr "<<endl;
    }
    ~A()
    {
        cout << "Destructor" << endl;
    }

    void *operator new(size_t size)
    {
        cout << "New operator inSide class " << size << endl;
        void *p = malloc(size);
        cout << p << endl;
        if (!p)
            throw bad_alloc(); // Throw exception if malloc fails
        return p;
    }
    void operator delete(void *p)
    {

        if (p)
        { // Check for nullptr
            cout << "Class specific Delete operator " << p << endl;
            free(p);
        }
    }
};

int main()
{
    A *obj = new A(); // Calls overloaded new and constructor
    delete obj;         // Calls destructor and overloaded delete

    return 0;
}