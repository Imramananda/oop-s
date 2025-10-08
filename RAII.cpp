#include<iostream>
#include<memory>
using namespace std;
int main ()
{
int *p = new int(10);
// Line 7: Prints the value stored at the allocated memory (10).
// Line 8: Prints the memory address of the allocated integer.
// Line 9: Prints the memory address of the pointer variable p.
cout << *p << endl;
cout << p << endl;
cout << &p << endl;
delete p;
std::unique_ptr<int> up(new int(20)); // 2 steps 
std::cout << *up << std::endl;
std::unique_ptr<int> up1 = std::make_unique<int>(30); // 1 step
std::cout << *up1 << std::endl;
return 0;
}

// deadlock prevention using RAII, lock_guard, unique_lock
// RAII: Resource Acquisition Is Initialization