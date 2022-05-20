//************Static Data Members in C++****************
//When a static data member is created, there is only a single copy of the data member which is shared between all the objects of the class.




#include<iostream>

using namespace std;

class Employee
{
static int count;
int id;
public:

void setdata(void)
{
    cout<<"Enter the employer id "<<endl;
    cin>>id;
    count++;
}
void getdata(void)
{
    cout<<"The id of the employer is  "<<id<<" and this is employert no. "<<count<<endl;
}
static void getcount(void)     //----------------------->this is static function.
{
    //cout<<id<<endl;
    cout<<"the value of count is "<<count<<endl;
}

};
// Count is the static data member of class Employee

int Employee::count=1000;     // if we not declear the value hear count get Default value is 0 always 
int main()
{
    Employee harrty,rohan,rajat,sonu;
    // harry.id = 1;
   // harry.count=1; // cannot do this as id and count are private

    harrty.setdata();
    harrty.getdata();
    Employee::getcount();

    rohan.setdata();
    rohan.getdata();
    Employee::getcount();

    rajat.setdata();
    rajat.getdata();
    Employee::getcount();

    sonu.setdata();
    sonu.getdata();
    Employee::getcount();

    return 0;
}