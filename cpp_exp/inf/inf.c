#include <stdio.h>

void ViewHex(double x)
{
    unsigned int* pUInt = ((unsigned int*)(&x));
    printf("0x%08X", *pUInt);
    pUInt++;
    printf("0x%08X \n", *pUInt);
}

void ViewHex_FP(float x)
{
    unsigned int* pUInt = ((unsigned int*)(&x));
    printf("0x%08X", *pUInt);
}

// int main()
// {
//     double a = 1.0/0.0;
//     double b = 0.0/0.0;
//     double c = a-a;

//     printf("%f\n%f\n%f\n", a, b, c);
//     printf("%f\n%f\n%f\n", -a, -b, -c);
//     printf("ViewHex a\n");
//     ViewHex(a);
//     printf("ViewHex b\n");
//     ViewHex(b);
//     printf("ViewHex c\n");
//     ViewHex(c);
//     ViewHex(-a);
//     ViewHex(-b);
//     ViewHex(-c);
//     getchar();
//     return 0;
// }


int main()
{
    float a = 1.0/0.0;
    printf("%f\n%f\n%f\n", a);
    printf("%f\n%f\n%f\n", -a);
    printf("ViewHex a\n");
    ViewHex_FP(a);
    printf("ViewHex -a\n");
    getchar();
    return 0;
}