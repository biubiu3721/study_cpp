
#include <iostream>
#define COUT std::cout
#define ENDL std::endl;
void fn();
int n;
static int nn;

int main()
{
    COUT << "in file1.cpp" << ENDL;
    COUT << n << ENDL;
    n = 20;
    COUT << n << ENDL;
    fn();
    COUT << n << ENDL;
}