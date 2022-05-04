

#include <iostream>
#define COUT std::cout
#define ENDL std::endl;

extern int n;

void fn()
{
    COUT << " in file2.cpp " <<ENDL;
    static int local_n;
    n++;
    COUT << n << ENDL;
    COUT << "local_n " << local_n << ENDL;
    COUT << " Step Out file2.cpp " <<ENDL;
}