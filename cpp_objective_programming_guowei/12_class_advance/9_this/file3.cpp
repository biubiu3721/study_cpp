#include "../../include/log.h"

class A
{
    int i ;
    public:
        void Hello(){COUT << "Hello" << ENDL;}
}; /// -> Hello(A * this){COUT << "Hello" << ENDL;}

int main()
{ 
    A * p = NULL;
    p->Hello(); // -> Hello(p);
} // output: Hello
