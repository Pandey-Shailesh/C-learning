#include<iostream>

using namespace std;

//The dynamic initialization of the object means that the object is initialized at the runtime.
//  Dynamic initialization of the object using a constructor is beneficial when the data is of different formats.


class Bankdeposit
{

int principal;
int years;
float interestrate;
float returnvalue;

public:
Bankdeposit(){}
Bankdeposit(int p,int y,float r);
Bankdeposit(int p,int y,int r);
void show();
};

Bankdeposit::Bankdeposit(int p,int y,float r)
{
    principal=p;
    years=y;
    interestrate=r;
    returnvalue=principal;
    for(int i=0;i<y;i++)
    {
        returnvalue=returnvalue*(1+interestrate);
    }
}
Bankdeposit::Bankdeposit(int p,int y,int r)
{
    principal=p;
    years=y;
    interestrate=float(r)/100;
    returnvalue=principal;
    for(int i=0;i<y;i++)
    {
        returnvalue=returnvalue*(1+interestrate);
    }
}
void Bankdeposit ::show()
{
     cout<<endl<<"Principal amount was "<<principal
        << ". Return value after "<<years
        << " years is "<<returnvalue<<endl;
}

int main()
{
    Bankdeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;

    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = Bankdeposit(p,y,r);
    bd1.show();


    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = Bankdeposit(p,y,R);
    bd2.show();

    bd3.show();
  
return 0;
}
 
