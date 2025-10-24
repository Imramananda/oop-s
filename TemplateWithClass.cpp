#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
class A
{
public:
    A(const T &v)
    {
        data = v;
        cout << "ctor : " << data << endl;
    }
    T get()
    {
        return data;
    }

private:
    T data;
};

int main()
{
    cout << "Main " << endl;
    A obj(10);
    cout << "Get " << obj.get() << endl;
    A obj2(string("Ira"));
    cout << "Obj2 "<< obj2.get() << endl;
    return 0;
}