#include<iostream>

using namespace std;

int main()

{
//************************structure********************************

//The structure is a user-defined data type that is available in C++.
// Structures are used to combine different types of data types, just like an array is used to combine the same type of data types.


struct students
{
    int sid;
    float smarks;
    char  sgroup;
};

struct students SHAILESH;
struct students VAIBHAV;
struct students RAJAT;

SHAILESH.sid=208;
SHAILESH.smarks=354.7;
SHAILESH.sgroup='a';


VAIBHAV.sid=234;
VAIBHAV.smarks=367.99;
VAIBHAV.sgroup='b';

RAJAT.sid=200;
RAJAT.smarks=342.5;
RAJAT.sgroup='C';

cout<<SHAILESH.sid<<endl;
cout<<SHAILESH.smarks<<endl;
cout<<SHAILESH.sgroup<<endl;

// we also write the struct by using typedef 


typedef struct employ
{
    int eid;
    float salary;
    char  bloodgroup;
} em;

em ravi;
em khushi;
em dhano;
em aashi;

ravi.eid=2109;
khushi.eid=4987;
ravi.salary=45678;
khushi.salary=23456;
ravi.bloodgroup='A';
khushi.bloodgroup='B';


cout<<ravi.eid<<endl;
cout<<ravi.salary<<endl;
cout<<ravi.bloodgroup<<endl;

//********************************union**********************************


//Unions are similar to structures but they provide better memory management then structures. 
// Unions use shared memory so only 1 variable can be used at a time.
//The compiler chooses the data type which has maximum memory for the allocation.

union money 
{
    int rice;
    float pound;
    char cash;

};

union money m1;
  m1.rice=45;
 // m1.cash='g';------------------->> only one variable can used at a time  with m1.
                                   //We can only use 1 variable at a time otherwise the compiler will give us a garbage value

   
   cout<<m1.rice<<endl;


//*********************************Enums*******************************************

//Enums are user-defined types which consist of named constants.
// Enums are used to make the program more readable.


enum Meal {breakfast,lunch,dinner};

Meal m2=lunch;
cout<<m2<<endl;


/* The main thing to note here is that (breakfast, lunch, dinner) are constants;
  the value for “breakfast” is “0”, the value for “lunch” is “1” and the value for “dinner” is “2”.*/


    return 0;
}