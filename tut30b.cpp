#include <iostream>

using namespace std;

class point
{
    int x, y;

public:
    point(int, int);

    void printnumber()
    {
        cout << "the point is (" << x << "," << y << ")" << endl;
    }
};
point::point(int a, int b)
{
    x = a;
    y = b;
}

int main()
{

    point p(1, 3);
    p.printnumber();

    point q(4, 6);
    q.printnumber();

    return 0;
}