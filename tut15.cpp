#include<iostream>

using namespace std;

//Function prototyping
//    syntex:-  type function_name(arguments);

int sum(int a,int b);

// int sum(int a,int b);---------->acceptable
// int sum(int a,b);----------------->not acceptable
// int sum(int ,int);-------------->acceptable

void g();
int main()

{

//******************************Functions in C++********************************
// Functions are the main part of top-down structured programming. 
// We break the code into small pieces and make functions of that code. 
// Functions help us to reuse the code easily.
g();
int num1; int num2;
cout<<"enter the first number"<<endl;
cin>>num1;
cout<<"enter the second number"<<endl;
cin>>num2;
cout<<"the sum is "<<sum(num1,num2);

//num1 and num2 are actual parameters.

    return 0;

}

int sum(int a,int b)
// Formal parameter:- a and b will taking the value from (Actual parameter) num1 and num2.
{
int c=a+b;
return c;  
}
void g(){
    cout<<"Hello, Good Morning"<<endl;
}