#include <iostream>
using namespace std;

// Generic Template
template <typename T>
class Printer {
public:
    void print(T data) {
        cout << "Generic Printing: " << data << endl;
    }
};

// Specialization for char
template <>
class Printer<char> {
public:
    void print(char data) {
        cout << "Character Printing: " << data << endl;
    }
};

int main() {
    Printer<int> p1;
    p1.print(100);     // Generic Printing: 100

    Printer<string> p2;
    p2.print("Hello"); // Generic Printing: Hello

    Printer<char> p3;
    p3.print('A');     // Character Printing: A

    return 0;
}