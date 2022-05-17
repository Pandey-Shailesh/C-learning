#include<iostream>

using namespace std;


int main()
{

/*  *************loops in c++*********************** 
there are 3 types of loops in c++
1. for Loop
2. while loop
3.do-while loop
 */

//For loop in c++


// Syntax for for loop
//for(initialization;condition;updation)
//  {
//    loop body(c++ code)
//   }

cout<<"printing 1 to 40 using for loop"<<endl;
for (int i=0; i<=40;i++)

{ 

    cout<<i<<endl;
}

//Example of infinite for loop
//for (int i;34<=40;i++)
//{
//   cout<<i<<endl;
//}


//While loop in c++
 //Syntax for while loop
 //while(condition)
 //  {
 //   c++ statements;
 //  }


cout<<"printing 1 to 30 using while loop"<<endl;
int a=1;
while (a<=30)
{
    cout<<a<<endl;
    a++;
}

//Example of infinite while loop
// while (true)
// {
//     cout<<i<<endl;
//     i++;
// }


// do-While loop in c++
 //Syntax for do-while loop
 //  do 
 //  {
 //   c++ statements;
 //  }
 //  while(condition);
cout<<"printing 1 to 30 using do-while loop"<<endl;
int b=1;
do
{
    cout<<b<<endl;
    b++;
}
while (b<=30);
// if the condision is false the program will run atleast one time 

    return 0;
}