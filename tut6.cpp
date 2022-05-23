#include <iostream>

using namespace std;
// there are two typed of header file:
// 1. system header files:  it comes with the compiler.
// 2. user defined header files : it was written by programmer.
// eg.. #include"this.h"  //-->  this will produce an error if this.h is not present in the current directory.

int main()
{
    int a = 6, b = 7;
    cout << "Operators in c++: " << endl;
    cout << endl;
    cout << "following are the types operators in c++" << endl;
    // Arithmetic operators
    

    cout << "the value of a+b is " << a + b << endl;
    cout << "the value of a-b is " << a - b << endl;
    cout << "the value of a*b is " << a * b << endl;
    cout << "the value of a/b is " << a / b << endl;
    cout << "the value of a%b is " << a % b << endl;
    cout << "the value of a++ is " << a++ << endl;
    cout << "the value of a-- is " << a-- << endl;
    cout << "the value of ++a is " << ++a << endl;
    cout << "the value of --a is " << --a << endl;

    cout << endl;

    // Assigment operators -->used to assign value to variables
    //  int a=3, b=8;
    // char d='d';

    // comparison operators
    cout << "Following are the comparision operators in c++" << endl;
    cout << "the value of a==b " << (a == b) << endl;
    cout << "the value of a!=b " << (a != b) << endl;
    cout << "the value of a>b " << (a > b) << endl;
    cout << "the value of a<b " << (a < b) << endl;
    cout << "the value of a<=b " << (a <= b) << endl;
    cout << "the value of a>=b " << (a >= b) << endl;
    cout << endl;

    // Logical Operators
    cout << "Following are the Logical operators in c++" << endl;
    cout << "the value ofthis logical and operator ((a==b) && (a<b)) is " << ((a == b) && (a < b)) << endl;
    cout << "the value ofthis logical or operator  ((a==b) || (a<b)) is " << ((a == b) || (a < b)) << endl;
    cout << "the value ofthis logical not operator (!(a==b)) is " << (!(a == b)) << endl;

    // Bitwise Operators

    return 0;
}