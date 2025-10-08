#include <iostream>

void stackExample() {
    int a = 10; // Stored in Stack
    std::cout << "Stack Variable: " << a << std::endl;
}

void heapExample() {
    int* ptr = new int(20); // Stored in Heap
    std::cout << "Heap Variable: " << *ptr << std::endl;
    delete ptr; // Always free heap memory
}

int main() {
    stackExample();
    heapExample();
    return 0;
}
