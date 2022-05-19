//***********Objects Memory Allocation & using Arrays in Classes*********************


/*The way memory is allocated to variables and functions of the class is different even though they both are from the same class.

The memory is only allocated to the variables of the class when the object is created. 
The memory is not allocated to the variables when the class is declared.
At the same time, single variables can have different values for different objects, so every object has an individual copy of all the variables of the class.
But the memory is allocated to the function only once when the class is declared.
So the objects don’t have individual copies of functions only one copy is shared among each object*/



//********************Arrays in Classes*****************************
/*Arrays are used to store multiple values of the same type.
An array is very helpful when multiple variables are required, instead of making multiple variables one array can be used which can store multiple values.
Array stores data in sequential order*/



#include<iostream>

using namespace std;

class Shop{
int itemId[100];
int itemPrice[100];
int counter;

public:
void setprice(void);
void initialcounter(void){counter=0;}
void display(void);
};

void Shop::setprice(void)
{
    cout<<"Enter itemId "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void Shop::display(void)
{
    for (int i = 0; i < counter; i++)
    {
     cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;

    }
    
}

int main()
{

Shop kirana;
kirana.initialcounter();
kirana.setprice();
kirana.setprice();
kirana.setprice();
kirana.display();

    return 0;
}