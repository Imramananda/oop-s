#include <iostream>
#include <vector>
using namespace std;

class Buffer
{
public:
    vector<int> data;
    Buffer() { cout << "Default ctor\n"; }
    Buffer(const Buffer &) { cout << "Copy ctor\n"; }
    Buffer(Buffer &&) noexcept { cout << "Move ctor\n"; }
};

Buffer create()
{
    Buffer b;
    cout<<"Rama before return "<<endl;
    return b;
}

int main()
{
    cout<<"Main start"<<endl;
    Buffer b1 = create(); // Move ctor
    
    cout<<"Here copy constructor should get called "<<endl;
    return 0;
}
