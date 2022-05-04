#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    _Bool b = n;
    n = b;
    printf("%d", n);
    return 0;
}
