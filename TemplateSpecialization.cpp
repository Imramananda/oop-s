#include<iostream>
using namespace std;


template <typename T>
void print(T val) {
    cout << "Generic: " << val << endl;
}

template <>
void print<int>(int val) {
    cout << "Integer: " << val << endl;
}

int main() {
    print(10);     // Integer specialization
    print("hi");   // Generic
    return 0;
}
