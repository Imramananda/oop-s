#include<iostream>
#include<string>

using namespace std;

template <typename T>
T f(const T &a, const T &b)
{
    cout << "f : " << a + b << endl;
    return a + b;
}

int main()
{
    cout << "Main " << endl;
    cout << "adding : " << f(10, 20) << endl;
    cout << "adding : " << f(10.5, 20.7) << endl;
    // For string literals the type deduced would be an array/const char* which
    // does not support operator+ for concatenation. Use std::string instead.
    cout << "adding : " << f(string("Ira "), string(" Yadav")) << endl;
    return 0;
}