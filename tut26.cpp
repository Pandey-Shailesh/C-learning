#include <iostream>
#include <cstdio>

using namespace std;

//********************Friend Function in C++************************
/*
Friend functions are those functions that have the right to access the private data members of class even though they are not defined inside the class.
It is necessary to write the prototype of the friend function.
One main thing to note here is that if we have written the prototype for the friend function in the class it will not make that function a member of the class


Properties of Friend Function

    Not in the scope of the class
    Since it is not in the scope of the class, it cannot be called from the object of that class, for example, sumComplex() is invalid
    A friend function can be invoked without the help of any object
    Usually contain objects as arguments
    Can be declared under the public or private access modifier, it will not make any difference
    It cannot access the members directly by their names, it needs (object_name.member_name) to access any member.
*/

class complex
{
    int a;
    int b;
    friend complex sumcomplex(complex o1, complex o2);
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout<<"The complex number is  "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sumcomplex(complex o1,complex o2)
{
    complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
};

int main()
{
    complex c1,c2,sum;
c1.setNumber(1,3);
c1.printNumber();

c2.setNumber(2,5);
c2.printNumber();

sum =sumcomplex(c1,c2);
sum.printNumber();


    return 0;
}