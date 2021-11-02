
//#include "sub.h"
#include "stdio.h"
int sub_int_c;
extern int sub_external_int_c;
int sub_external_int_c;
int global_sub = 1;
const int read_only_value=0;
static int val_should_b;
//int add(int _a, int _b)
//{
//    printf("in sub:add() :%d \n", _a - _b);
//    return _a - _b;
//}

int test_michael(int a)
{
    printf("sub.c::test_michael() %d\n", a);
    test_in_sub();
}

int test_ar_s()
{
    return 0;
}

int test_in_sub()
{
    printf("sub.c:: test_in_sub");
    int ret = add(1, 2);
    return ret;
}

int sub(int _a, int _b)
{
	return 0;

}

int sub1(int _a, int _b)
{
        return 0;

}


int sub2(int _a, int _b)
{
        return 0;

}


`
