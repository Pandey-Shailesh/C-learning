/*
Member Friend Functions in C++

Friend functions are those functions that have the access to private members of the class in which they are declared. 
The main thing to note here is that only that function can access the member function which is made a friend of the other class. 


Friend Classes in C++

Friend classes are those classes that have permission to access private members of the class in which they are declared.
The main thing to note here is that if the class is made friend of another class then it can access all the private members of that class.


*/




#include <iostream>

using namespace std;
// Forward Declaration
class complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealPart(complex, complex);
    int sumComplexPart(complex, complex);
};

class complex
{
    int a;
    int b;
    // Individually declaring functions as friends
    friend int Calculator ::sumRealPart(complex, complex);
    friend int Calculator::sumComplexPart(complex, complex);

    // Aliter: Declaring the entire calculator class as friend
    // friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "The complex number is  " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealPart(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int Calculator::sumComplexPart(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{

    complex o1, o2;
    o1.setNumber(1, 5);
    o1.printNumber();
    o2.setNumber(4, 7);
    o2.printNumber();
    Calculator calc;
    int res = calc.sumRealPart(o1, o2);
    cout << "the sum of real part of complex number is  " << res << endl;
    int resc = calc.sumComplexPart(o1, o2);
    cout << "the sum of complex part of complex number is " << resc << endl;

    return 0;
}