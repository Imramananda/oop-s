#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Empl
{
public:
    Empl()
    {
        cout << "Empl ctor " << endl;
    }
    virtual void salaryHike()
    {
        cout << "Salary Hike for employees " << endl;
    }
    virtual ~Empl()
    {
        cout << "Empl dtor " << endl;
    }
};

class Engineer : public Empl
{
public:
    Engineer()
    {
        cout << "Engineer ctor " << endl;
    }
    void salaryHike() override
    {
        cout << "Salary Hike for Engineer 30 %" << endl;
    }
    ~Engineer()
    {
        cout << "Engineer dtor " << endl;
    }
};

class Manager : public Empl
{
public:
    Manager()
    {
        cout << "Manager ctor " << endl;
    }
    void salaryHike() override
    {
        cout << "Salary Hike for Manager 10 % " << endl;
    }
    ~Manager()
    {
        cout << "Manager dtor " << endl;
    }
};

int main()
{
    cout<<"Main function "<<endl;
    vector<unique_ptr<Empl>> Obj;
    cout<<"Pushing object  "<<endl;
    Obj.push_back(make_unique<Engineer>());
    Obj.push_back(make_unique<Manager>());

    for(auto &a:Obj)
        a->salaryHike();
    return 0;
}