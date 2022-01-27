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
        A(A &a)
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

int main()
{
    // A a01(); // declear a function

    A a1 = A();
    // A a1 = A(); //
    //A a2 = a1; // copy constructor.
    //a1 = a2; // assign operator
    //a1 = a1 + a2; // wrong
    
}