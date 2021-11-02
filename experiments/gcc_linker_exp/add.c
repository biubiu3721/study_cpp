

#include "stdio.h"
int global_sub;



int add(int _a, int _b)
{
    printf("In add.c add(): %d \n", _a + _b);
    return _a + _b;
}

int test_in_add()
{
    printf("In add.c:test_in_add \n");
    int ret = add(1, 2);
    return ret;
}


int test_call_sub_functions()
{
    char a;
    int b = test_michael();
}

