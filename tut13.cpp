#include<iostream>

using namespace std;

int main()

{
//  Array is the continuos block in the memory.
//arrays example 

int marks [4]={23,54,87,90};     // here [] is also vaildbecause compiler is also assume home much no of arrays.
cout<<"these are marks"<<endl;
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;



// in array  the  marks is address of itself
// if we write the &marks------> these is wrong 
int mathsmarks[4];
mathsmarks[0]=334;
mathsmarks[1]=664;
mathsmarks[2]=444;
mathsmarks[3]=554;


cout<<"these are mathsmarks"<<endl;


// we also change the value of array
cout<<mathsmarks[0]<<endl;
mathsmarks[1]=1009;
cout<<mathsmarks[1]<<endl;
cout<<mathsmarks[2]<<endl;
cout<<mathsmarks[3]<<endl;

cout<<endl;

for  (int i = 0; i < 4; i++)
{
    cout<<"the value of mathsmarks "<<i<<" is "<<mathsmarks[i]<<endl;
}

cout<<endl;


//Quick quiz:-  do same using while and do-while ... 

int g=0;
while(g<=4)
{
    cout<<"the value of marks "<<g<<" is "<<marks[g]<<endl;
    g++;
}

cout<<endl;
int j=0;
do
{
    cout<<"the value of mathsmarks "<<j<<" is "<<mathsmarks[j]<<endl;
    j++;
} 
while (j<=4);



cout<<endl;



int* p=marks;
cout<<"the value of *p is "<<*p<<endl;
cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
cout<<"the value of *(p+3) is "<<*(p+3)<<endl;

cout<<&p<<endl;
cout<<marks<<endl;
cout<<*(p+1)<<endl;
cout<<*(p++)<<endl;    //first p print then it increase the  value
cout<<*p<<endl;        // here the value of p is increase therefore the value of p is 54
cout<<*(++p)<<endl;    // here the value is increase then print  


    return 0;
}