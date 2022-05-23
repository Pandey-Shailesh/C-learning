#include <iostream>

using namespace std;

int main()
{
    // whatis pointer ----> data type which holds the addrese of other data types.

    // pointer syntex:  int *b= &a;

    int a = 3;
    int *b = &a;

    //&------> called as "adderess of"------->  Address of operator

    cout << "the address of a is:" << b << endl;

    cout << "the address of a is:" << &a << endl;

    //*------> called as "value at" --------->   Dereference operator
    cout << "the value at address b is:" << *b << endl;

    //    pointers to pointers

    int **c = &b;
    cout << "the address of b is " << &b << endl;
    cout << "the address of b is " << c << endl;
    cout << "the value at address c is" << *c << endl;
    cout << "the value at address value_at(value_at(c)) is " << **c << endl;

    return 0;
}