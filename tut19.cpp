#include <iostream>

using namespace std;

//*************************Function Overloading in C++************************
// Function overloading is a process to make more than one function with the same name but different parameters, numbers, or sequence.

int sum(int a, int b)
{
    cout << "using function with 2 arguments" << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "using function with 3 arguments" << endl;
    return a + b + c;
}
// volume of cylinder
float volume(double r, int h)
{
    return (3.14 * r * r * h);
}

// volume of cube
int volume(int a)
{
    return (a * a * a);
}

// volume of cuboid
int volume(int l, int b, int h)
{
    return (l * b * h);
}

// volume of Sphere
float volume(int z, int r)
{
    return (1.33 * 3.14 * r * r * r);
}

// Area of circle
float Area(float r)
{
    return (3.14 * r * r);
}

// Area of square
int Area(int p)
{
    return (p * p);
}

// Area of Rectangle
int Area(int l, int b)
{
    return (l * b);
}

// Area of triangle
float Area(int z, int b, int h)
{
    return (0.5 * b * h);
}

// // Area of ellipse
float Area(float pi, float a, int b)
{
    return (3.14 * a * b);
}

// Area of Regular polygon
float Area(int n, float a, int s)
{
    return (0.5 * n * s * a);
}

// circumference of circle
float circumference(float r)
{
    return (2 * 3.14 * r);
}

int main()
{
    cout << "the sum of 3 and 6 is " << sum(3, 6) << endl;
    cout << "the sum of 3, 4 and 5 is " << sum(3, 4, 5) << endl;
    cout << "the volume of cube of side 5 is " << volume(5) << endl;
    cout << "the volume of cylinder of radius 4 and height 7 is " << volume(4, 7) << endl;
    cout << "the volume of cuboid of length 8,base 9 and height 10 is " << volume(8, 9, 10) << endl;
    cout << "the volume of sphere of radius 6 is " << volume(3, 6) << endl;
    cout << "the area of circle of radius 4 is " << Area(4) << endl;
    cout << "the area of square of side 6 is " << Area(6) << endl;
    cout << "the area of rectangle of length 9 and base 5 is " << Area(9, 5) << endl;
    cout << "the area of triangle of base 3 and height 5 is " << Area(7, 3, 5) << endl;
    cout << "the area of ellipse of major radius 4 and minor radius 3 is " << Area(3.14, 4, 3) << endl;
    cout << "the area of Regular Polygon of no. of side 6,side length 7 and apothem  6.45 is " << Area(6, 7, 6.45) << endl;
    cout << "the circumference of circle of radius 6.45 is " << circumference(6.45) << endl;

    return 0;
}