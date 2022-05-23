#include <iostream>

using namespace std;

class y;

class x
{
    int val1;
    friend void exchange(x &, y &);

public:
    void indata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};

class y
{
    int val2;
    friend void exchange(x &, y &);

public:
    void indata(int b)
    {
        val2 = b;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};

void exchange(x &t, y &r)
{
    int temp = t.val1;
    t.val1 = r.val2;
    r.val2 = temp;
}

int main()

{
    x o1;
    y o2;

    o1.indata(65);
    o2.indata(32);
    exchange(o1, o2);

    cout << "The value of c1 after exchanging becomes: ";
    o1.display();
    cout << "The value of c2 after exchanging becomes: ";
    o2.display();

    return 0;
}