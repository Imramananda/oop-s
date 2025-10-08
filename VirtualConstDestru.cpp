#include<iostream>
using namespace std;

class Base
{
    public:
        Base()
        {
            cout << "Base Constructor" << endl;
        }
        virtual ~Base() // Virtual destructor
        {
            cout << "Base Destructor" << endl;
        }
        virtual void display() // Virtual method
        {
            cout << "Display of Base" << endl;
        }
};

class Derived : public Base
{
    public:
        Derived()
        {
            cout << "Derived Constructor" << endl;
        }
        ~Derived()
        {
            cout << "Derived Destructor" << endl;
        }
        void display() override
        {
            cout << "Display of Derived" << endl;
        } 
};

int main()
{
    Base *b = new Derived();
    b->display(); // Calls Derived's display method
    delete b; // Calls Derived's destructor followed by Base's destructor
    return 0;
}