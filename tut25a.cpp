//*********Array of Objects in C++*****

/*An array of Objects in C++

1.An array of objects is declared the same as any other data-type array.
2.An array of objects consists of class objects as its elements.
3.If the array consists of class objects it is called an array of objects. */

#include <iostream>

using namespace std;

class Employee
{
    int Id;
    int salary;

public:
    void setId(void)
    {
        salary == 112;
        cout << "Enter the employe id " << endl;
        cin >> Id;
    }

    void getId(void)
    {
        cout << "the Id of the employe is  " << Id << endl;
    }
};

int main()
{
    Employee fib[4];

    for (int i = 0; i < 4; i++)
    {
        fib->setId();
        fib->getId();
    }
    return 0;
}