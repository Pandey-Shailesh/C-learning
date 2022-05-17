#include<iostream>
#include<iomanip>

using namespace std;


int main()
{ 
    
    //here we change the value of the variable but using constant , we fix the value of variable we cannot change the value again.
int x=34;
cout<< "the value of x is "<<x<<endl;
x=65;
cout<< "the value of x is "<<x<<endl;





    //*******************constants in c++*********************


    const int a=56;
    cout<< "the value of a is "<<a<<endl;

//*******************manipulators in c++*********************
//1. endl 
//2. stew     ...................this was in #include<iomanip> header file



int q=2,r=56, s=567, t=9876;

cout<< "the value of q without is "<<q<<endl;
cout<< "the value of r without is "<<r<<endl;
cout<< "the value of s without is "<<s<<endl;
cout<< "the value of t without is "<<t<<endl;

cout<< "the value of q is "<<setw(4)<<q<<endl;
cout<< "the value of r is "<<setw(4)<<r<<endl;
cout<< "the value of t is "<<setw(4)<<s<<endl;
cout<< "the value of t is "<<setw(4)<<t<<endl;


//******************* Operator Precedence****************************

int y=5,z=8;
 int c=(y*5)+z;                     //how the expression can solve : by seen the precedence of operator
 int d=((((y*5)+z)-45)+87);        // see the associativity of thre expression

cout<< "the value of c is "<<c<<endl;
cout<<"the value of d is "<<d<<endl;



return 0;

}