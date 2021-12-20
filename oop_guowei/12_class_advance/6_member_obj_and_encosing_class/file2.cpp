

#include "include/log.h"

class A
{
    public:
        A(){COUT << "default" << ENDL;}
        A(A & a){ COUT << "copy" << ENDL;}
};

class B{A a;};

int main()
{
    B b1;
    COUT << "b1 constructed " << ENDL;
    B b2(b1);
    return 0;
}