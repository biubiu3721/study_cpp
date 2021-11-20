#include <stdio.h>

int main()
{
    // used declared and define value.
    extern int iExtern;
    // The value printed can prove that the external value has been called to here.
    printf("%d\n", iExtern); 
    return 0;
}