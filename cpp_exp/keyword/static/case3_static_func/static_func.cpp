#include <iostream>
#define COUT std::cout
#define ENDL std::endl
static void fn();
int main()
{
    fn();
    fn();
}

static void func()
{
    int n = 10;
    COUT << n << ENDL;
}

void fn()
{
    int n = 10;
    COUT << n << ENDL;
    n++;
}