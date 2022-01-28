/**
 * @file main1.cpp
 *     this experiments shows the procedure of explicit call of constructor.
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "stdio.h"

int count = 0;
class A
{
    int x;
    public:
        A()
        {
            printf("Default Construct is called.\n");
            x = -1;
        }
        A(int m)
        {
            printf("Default Construct is called.\n");
            x = -1;
        }
        A(const A &a)
        {
            printf("copy constructor is called.\n");
            x = 1;
        }
        //void operator = (A &a){ x = a.get(); printf("operator is called."); }
        int get(){return x;}
        void set(){x = count;}
};

void func1()
{
    // 1. // implicitly call.
    A a0; 
    printf("%d \n", a0.get());
}

void func2()
{
    A a01(); // declear a function
    // a explain is that: explicit call  = default constructor A() + copy constructor =.
    // However, the copy constructor hasn't been called. 
    // In my opinion, compiler will check grammar of "=" as assign. but actually no copy 
    // has been called.
    A a1 = A(1); 
}

// compare copy and assign.
void func3()
{
    //A a2 = a1; // copy constructor.
    //a1 = a2; // assign operator
    //a1 = a1 + a2; // wrong
}

int main()
{
    A a1 = A();
    // Ret:
    // Default Construct is called.   
}