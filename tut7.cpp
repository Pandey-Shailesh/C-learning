#include <iostream>

using namespace std;

int c = 45;

int main()
{
  int a, b, c;

  //***************Build in Data types********************
  cout << " Enter the value of a:" << endl;
  cin >> a;
  cout << "Enter the value of b:" << endl;
  cin >> b;
  c = a + b;
  cout << "the sum is " << c << endl;
  cout << "the global c is" << ::c << endl;
  //    :: --> scope resolution operator

  //***************Float ,double and long double Literals********************
  float d = 3.14f;
  long double e = 3.14l;

  cout << " the value of d:" << d << endl;
  cout << " the value of e:" << e << endl;

  // using sizeof of operator
  cout << " the size of 3.14:" << sizeof(3.14) << endl;
  cout << " the size of 3.14f:" << sizeof(3.14f) << endl;
  cout << " the size of 3.14F:" << sizeof(3.14F) << endl;
  cout << " the size of 3.14l:" << sizeof(3.14l) << endl;
  cout << " the size of3.14L:" << sizeof(3.14L) << endl;
  

  //***************Reference Variables********************

  // Rohandas--> Monty-->Rohu--->>Dangerous coder
  float x = 455;
  float &y = x;
  cout << "the value of x is :" << x << endl;
  cout << "the value of y is :" << y << endl;

  //***************Typecastings********************

  int p = 45;
  float q = 45.46;
  cout << " the value of p:" << (float)p << endl;
  cout << " the value of p:" << float(p) << endl; // both lines meaning is same

  cout << " the value of q:" << (int)q << endl;
  cout << " the value of q:" << int(q) << endl; // both lines meaning is same
  int r = int(q);

  cout << "the expression is " << p + q << endl;
  cout << "the expression is " << p + int(q) << endl;
  cout << "the expression is " << p + (int)q << endl;
  cout << "the value of r is " << r << endl;

  return 0;
}