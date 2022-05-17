#include<iostream>
using namespace std;

// Berak and continue statement
int main()
{

cout<<"break Statement"<<endl;

for (int i=0;i<50;i++)
{
     cout<<i<<endl;
    if(i==3)
    {
        break;
    }
}


   cout<<"contineue statement"<<endl;
  
   for (int a=0;a<50;a++)
   {
     
       if(a==5)
       {
           continue;
       }
         cout<<a<<endl;
   }
   
    return 0;
}