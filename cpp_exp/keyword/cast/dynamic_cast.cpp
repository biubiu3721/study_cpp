#include "include/log.h"

class Base
{
    public:
        virtual ~Base(){}
};

class Derived: public Base{};

int main()
{
    Base b;
    Derived d;
    Derived* pd;
    pd = reinterpret_cast<Derived*>(&b);
    if(pd = NULL)
    {
        COUT << "unsafe reinterpret_cast" << ENDL;
    }
    pd = dynamic_cast<Derived*>(&b); // base* to derived*.
    if(pd == NULL)
    {
        COUT << "unsafe dynamic_cast1" << ENDL;
    }
    pd = dynamic_cast<Derived*> (&d); // derived* to derived*.
    if(pd == NULL)
    {
        COUT << "unsafe dynamic_cast2" << ENDL;
    }
    return 0;

}

