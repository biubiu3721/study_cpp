#include <stdio.h>
#include <iostream>

void case1()
{
    double a = 4, b = 5;
    double & r1 = a;
    double & r2 = r1; // equal to double &r2 = a;
    r2 = 10;
    //std::cout << a << std::endl;
    r1 = b;
    //std::cout << a << std::endl;
}

void swap(int & a, int & b)
{
    int tmp;
    tmp = a; a = b; b = tmp;
}

void case2()
{
    int n1 = 1, n2 = 2;
    std::cout << "n1, n2 " << n1 << n2 << std::endl; 
    swap(n1, n2);
    std::cout << "n1, n2 " << n1 << n2 << std::endl; 
}

int n = 4; 
int & SetValue() 
{
    return n;
}; 
void case3()
{
    SetValue() = 40;    
    std::cout << SetValue() << std::endl;

}


int main()
{ 

    case1();
    case2();
    case3();

}