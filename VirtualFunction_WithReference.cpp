#include <iostream>
using namespace std;

class Shape
{
  public:
  
    // Virtual function
    virtual void calculate()
    {
        cout << "Area of your Shape ";
    }

    // Virtual destructor
    virtual ~Shape()
    {
        cout << "Shape Destructor called\n";
    }
};

// Derived class: Rectangle
class Rectangle : public Shape
{
  public:
    int width, height, area;

    void calculate() override
    {
        width = 5;
        height = 10;

        area = height * width;
        cout << "Area of Rectangle: " << area << "\n";
    }

    ~Rectangle()
    {
        cout << "Rectangle Destructor called\n";
    }
};

// Derived class: Square
class Square : public Shape
{
  public:
    int side, area;

    void calculate() override
    {
        side = 7;
        area = side * side;
        cout << "Area of Square: " << area << "\n";
    }

    ~Square()
    {
        cout << "Square Destructor called\n";
    }
};

int main()
{

    Shape *S;

    Rectangle r;
    S = &r;
    S->calculate();

    Square sq;
    S = &sq;
    S->calculate();

    return 0;
}