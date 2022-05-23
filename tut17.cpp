#include <iostream>

using namespace std;

//*******************Inline Functions in C++**************
// 1.Inline functions are used to reduce the function call.
// 2.When one function is being called multiply times in the program it increases the execution time, so inline function is used to reduce time and increase program efficiency.
// 3.Inline functions are considered to be used when the function is small otherwise it will not perform well.
// 4.Inline is not recommended when static variables are being used in the function.

inline int product(int a, int b)
{
    // Not recommended to use below lines with inline functions
    // static int c=0; // This executes only once
    // c = c + 1; // Next time this function is run, the value of c will be retained
    return a * b;
}

//*************************Default Arguments in C++******************************
// 1.Default arguments are those values which are used by the function if we don’t input our value.
// 2.It is recommended to write default arguments after the other arguments.

float moneyReceive(int currentmoney, float factor = 1.04)
{
    return currentmoney * factor;
}

//******************************Constant Arguments in C++***************************
// 1.Constant arguments are used when you don’t want your values to be changed or modified by the function.
// int strlen(const char *p){}

int main()
{
    int a, b;
    cout << "Enter the value of a and b " << endl;
    cin >> a >> b;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl; // this process is used multiple times so we used inline function
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;

    int money = 100000;

    cout << "If you have " << money << " Rs in your bank account, you will recive " << moneyReceive(money) << "Rs after 1 year" << endl;
    cout << "For VIP: If you have " << money << " Rs in your bank account, you will recive " << moneyReceive(money, 1.1) << " Rs after 1 year";

    return 0;
}