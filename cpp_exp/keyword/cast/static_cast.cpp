#include "include/log.h"

class A
{
    public:
        operator int() { return 1;};
        operator char*() {return NULL;};
};

int main()
{
    A a;
    int n;
    char *p = "New Dragon Inn";
    n = static_cast<int>(3.14); // n = 3
    printf("n: %d\n", n);
    n = static_cast<int>(a); // calc a.operator int, n = 1.
    printf("n: %d\n", n);
    p = static_cast<char*>(a); // calc a.operator char*, p = NULL;
    printf("p: %p\n", p);
    // p = static_cast<int>(p); // static cast donot support int to *.
    // n = static_cast<char>(n);// static cast donot support * to int.
}