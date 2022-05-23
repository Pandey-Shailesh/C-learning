#include <iostream>

using namespace std;

//  This will not swap the value of a and b.
void swap(int a, int b)
{
    // temp   a     b
    int temp = a; //    4    4     5
    a = b;        //     4    5     5
    b = temp;     //     4    5     4
}

// call by reference using pointer
void swappointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// call by reference using reference variables
// int &
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    // return a;
}

int main()
{

    int x = 4, y = 5;
    cout << "the value of x is " << x << " and the value of y is  " << y << endl;
    // swap(x ,y);                   //  This will not swap the value of a and b.
    // swappointer(&x,&y);          //This will swap a and b using pointer reference
    swapReferenceVar(x, y); // This will swap a and b using reference variables
    // swapReferenceVar(x,y)=760; //This will swap a and b using reference variables
    cout << "the value of x is " << x << " and the value of y is  " << y << endl;

    return 0;
}