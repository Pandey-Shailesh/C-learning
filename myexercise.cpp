#include<iostream>

using namespace std;

int main()
{

cout<<"The table of 6"<<endl;

for(int i=1;i<=10;i++)
{
    cout<<"6x"<<i<<"="<<6*i<<endl;
    
}


cout<<"print even number"<<endl;
for(int n=0;n<=10;n++)
{
cout<<n*2<<endl;

}

cout<<"print odd number"<<endl;
for(int a=1;a<=10;a++)
{
cout<<a*2-1<<endl;

}

{int b,sum;

cout<<"enter the value :"<<endl;
cin>>b;
sum=(b*(b+1))/2;
cout<<"the sum of n natural numbers is :"<<sum<<endl;
}


{
int q;
cout<<"enter the value :"<<endl;
cin>>q;
if (q%2==0)
{
    cout<<"the value is even"<<endl;  
}
else
{
    cout<<"the vlaue is odd"<<endl;
 }

}

    return 0;
}