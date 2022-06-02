#include <iostream>

using namespace std;

/*Parameterized and Default Constructors in C++

Parameterized constructors are those constructors that take one or more parameters.
 Default constructors are those constructors that take no parameters.
 The main things to note here are that constructors are written in the public section of the class and the constructors don’t have a return type.

*/

class complex
{
    int a, b;

public:
    complex(int, int); // Constructor declaration

    void print()
    {
        cout << "the complex number is  " << a << " + " << b << "i." << endl;
    }
};
complex ::complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters

{
    a = x;
    b = y;
}

int main()
{
    // Implicit call
    complex a(4, 6);
    a.print();

    // Explicit call
    complex b = complex(5, 8);
    b.print();

    return 0;
}