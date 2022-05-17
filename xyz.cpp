#include<iostream>
using namespace std;
int fun(int x, int y){
    printf("%d",x+y);
    return x+y;
}
int main(){
    printf("%d",fun(5,6));
    return 0;
}