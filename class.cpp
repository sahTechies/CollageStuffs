
#include<iostream>
class A{
 public:
    int a,b;
 int sum(){
     return a+b;
 }   
};

int main(){
    A 01;
    01.a=10;
    01.b=20;
    std::cout<<01.sum();
    return 0;
}