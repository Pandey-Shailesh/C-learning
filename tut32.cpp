#include <iostream>

using namespace std;

class simpal
{
    int data1;
    int data2;
    int data3;

public:
    simpal(int a, int b = 9, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void print();
};

void simpal::print()
{
    cout << "The value of data1, data2 and data3 is " << data1 << ", " << data2 << " and " << data3 << endl;
}

int main()
{

    simpal s(12,84);
    s.print();
    return 0;
}
