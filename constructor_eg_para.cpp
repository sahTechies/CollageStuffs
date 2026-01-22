#include<iostream>

class A{
    int a,b;
public:
    A(int x, int y){  // Parameterized Constructor
        a = x;
        b = y;
    }
    void display(){
        std::cout << "a: " << a << ", b: " << b << std::endl;
    }
        
};

int main(){
    A o1=A(5,6);
    return 0;
}