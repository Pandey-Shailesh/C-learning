// **************Passing Object as Function Arguments in c++ ***************
//Objects can be passed as function arguments. This is useful when we want to assign the values of a passed object to the current object.


#include<iostream>>

using namespace std;

class complex
{
 int a;
 int b;

 public:
 void setdata(int v1,int v2)
{
    a= v1;
    b= v2;
}

void SetDataBySum( complex o1,complex o2)
{
    a=o1.a+o2.a;
    b=o1.b+o2.b;
}

void printnumber(void)
{
    cout<<"the complex number is  "<<a<<"+"<<b<<"i"<<endl;
}
};




int main()
{
complex c1,c2,c3;

c1.setdata(4,5);
c1.printnumber();

c2.setdata(3,5);
c2.printnumber();

c3.SetDataBySum(c1,c2);
c3.printnumber();

    return 0;
}


