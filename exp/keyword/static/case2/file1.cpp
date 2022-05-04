#include <iostream>
#define COUT std::cout
#define ENDL std::endl

void fn();
int main()
{
    fn();
    fn();
    fn();
}

void fn()
{
    static int n = 10;
    COUT << n << ENDL;
    n++;
}