#include <iostream>

using namespace std;
//*******************copy constructor**************
// A copy constructor is a type of constructor that creates a copy of another object.
// If we want one object to resemble another object we can use a copy constructor.
// If no copy constructor is written in the program compiler will supply its own copy constructor.

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }

    number(int num)
    {
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    number(number &obj)
    {
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{

    number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    number z1(z); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called
    z2.display();

    number z3 = z; // Copy constructor invoked
    z3.display();

    // z1 should exactly resemble z  or x or y

    return 0;
}
