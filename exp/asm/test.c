#include "stdio.h"

int main()
{

    /**
     * __asm__ keywords
     * __volatile__()
        *  A volatile specifier is a hint to a compiler 
        *  that an object may change its value in ways not 
        *  specified by the language so that aggressive 
        *  optimizations must be avoided.
     * 
     */
    __asm__ __volatile__(: : :);

}