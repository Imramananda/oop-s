#include <iostream>
#include <utility>
using namespace std;

class A
{
private:
    int *data;

public:
    A() { data = nullptr; }
    A(int d) // constructor default
    {
        data = new int(d);
        cout << "Parameterized address " << data << " - value - " << *data << endl;
    }
    // 1 destructor
    ~A()
    {
        cout << "Dstructor freeing" << endl;
        delete data;
    }
    // 2 copy construcor //deep copy
    A(const A &a)
    {
        data = new int(*a.data);
        cout << "Copy constructor " << data << " - value - " << *data << endl;
    }
    // 3 copy assignment operator
    A &operator=(const A &b)
    {
        if (this == &b)
            return *this;
        delete data;
        data = new int(*b.data);
        cout << "Assignment Operator " << data << " - value - " << *data << endl;
        return *this;
    }
    // 4 move constructor
    A(A &&d) noexcept
    {
        data = d.data;
        d.data = nullptr;
        cout << "Move constructor " << data << "- value - " << *data << endl;
    }

    // 5 move assignment operator
    A &operator=(A &&a) noexcept
    {
        if (this != &a)
        {
            delete data;
            data = a.data;
            a.data = nullptr;
            cout << "Move assignemnt " << data << "- value - " << *data << endl;
        }
        return *this;
    }

    void print()
    {
        cout << "Print " << data << " value " << *data << endl;
    }
};

int main()
{
    A a(10);
    A b = a; // copy construcotr
    A c;
    A d(550);
    c = d; // assignment
    a.print();
    b.print();
    c.print();
    d.print();

    A e = std::move(d); // move contructor
    c = std::move(a);   // move assinement

    return 0;
}
