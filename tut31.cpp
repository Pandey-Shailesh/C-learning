#include <iostream>

using namespace std;


/*
Constructor Overloading in C++

Constructor overloading is a concept in which one class can have multiple constructors with different parameters.
 The main thing to note here is that the constructors will run according to the arguments
 for example if a program consists of 3 constructors with 0, 1, and 2 arguments, 
 so if we pass 1 argument to the constructor the compiler will automatically run the constructor which is taking 1 argument. 

*/

class complex
{
    int x, y;

public:
    complex(int a, int b)
    {
        x = a;
        y = b;
    }

    complex(int a)
    {
        x = a;
        y = 0;
    }

    complex()
    {
        x = 0;
        y = 0;
    }

    void printNumber()
    {
        cout << "Your number is " << x << " + " << y << "i" << endl;
    }
};

int main()

{

    complex c1;
    c1.printNumber();

    complex c2(4);
    c2.printNumber();

    complex c3(6, 8);
    c3.printNumber();

    return 0;
}