
#include <iostream>
using namespace std;
struct Book{
  int id;
  string name;
  float price;
  void fun1(){
      cout<<"enter id,name ,price";
      cin>>id>>name>>price;
      
  }
  
  void fun2(){
      cout<<id<<name<<price;
  }
  
};
int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    Book b1;
    b1.fun1();
    b1.fun2();

    return 0;
}