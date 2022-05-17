#include<iostream>

//*******************Control  structure***************************
//1.sequence structure
//2.selection structure
//3.loop structure

using namespace std;

int main()
{

//Selection Control Structure:  (if else or if else lader)
//  here we use, if else statement..
int age;
 cout<<"tell me your age "<<endl;
 cin>>age;
 if ((age<18)&&(age>0))
 {
     cout<<"you can not come to my party"<<endl;
}
 else if (age==18)
{
     cout<<"you are kindly bring your id "<<endl;

 }
 else if (age<1)
 {
     cout<<"you are not yet born"<<endl;
 }
 else 
 { 
      cout<<"you can come to the party"<<endl;
 }
 cout<<endl;

//Selection Control Structure:  (switch case statement)
 switch (age)
 {
     case 18:
     cout<<"you are 18"<<endl;
     break;

     case 20:
     
     cout<<"you are 20"<<endl;
     break;

    case 21:
     
     cout<<"you are 21"<<endl;
     break;

     default:
     cout<<"no special case"<<endl;
     break;
 }

cout<<"done with switch case"<<endl;
    return 0;
}

