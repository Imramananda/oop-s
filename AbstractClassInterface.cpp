#include <iostream>
using namespace std;

class Abstract
{
public:
    Abstract() { cout << "Abstract Constr" << endl; }
    virtual void draw() = 0;
    virtual void area() = 0;
    virtual ~Abstract(){cout<<"Abstract Destructor "<<endl;}
};

class Circle : public Abstract
{
    int redius;

public:
    Circle(int r) : redius(r)
    {
        cout << "Circle constr " << endl;
    }
    void draw() override
    {
        cout << "draw circle" << endl;
    }
    void area() override
    {
        cout << "Circle redius is - " << 3.147 * redius << endl;
    }
    ~Circle()
    {
        cout<<"Circle Destrturcot "<<endl;
    }
};

class Rectangle : public Abstract
{

    int w, h;
    public:
    Rectangle(int a, int b) : w(a), h(b)
    {
        cout << "Rectngle constructor " << endl;
    }
    void draw() override
    {
        cout << " Rectangle draw " << endl;
    }
    void area() override
    {
        cout << "Area of Rectanle is - " << w * h << endl;
    }
    ~Rectangle()
    {
        cout<<"Rectanngle Destructor "<<endl;
    }
};

int main()
{
    Abstract *b = new Circle(5);
    b->draw();
    b->area();

    Abstract *R = new Rectangle(5,4);
    R->draw();
    R->area();

    delete b;
    delete R;
    return 0;
}