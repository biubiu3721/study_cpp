
#include "./include/blas.h"
extern int global_sub;
int main()
{
   global_sub = 1; 
   int a = 1;
   int b = 2;
   add(1, 2);
   test_in_add();
   test_in_sub();
   test_call_sub_functions();
   gemm();
   sub(a, b);
   //int d = (a, b);
   //printf("c: %d \n", c);
   //printf("d: %d \n", d);
   return 0;
}
