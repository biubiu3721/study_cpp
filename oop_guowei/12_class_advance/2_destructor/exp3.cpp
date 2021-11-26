// destructor.
// First Construct, last Destruct.
#include "../../include/log.h"

class Demo
{
    int id;
    public:
        Demo(int i)
        {
            id = i;
            COUT << "this: " << this << ENDL;
            COUT << "id = " << id << " Constructed" << ENDL;
        }
        ~Demo()
        {
            COUT << "this: " << this << ENDL;
            COUT << "id = " << id << " Destructed" << ENDL;
        }
};

Demo d1(1); // build first, release last.
void Func()
{
    static Demo d2(2); // build don't know, release second last.
    Demo d3(3);
    COUT << "Func" << ENDL;
}

void exp3()
{
    Demo d4(4);
    d4 = 6;
    COUT << "main" << ENDL;
    {
        Demo d5(5);
    }
    Func();
    COUT << "main ends;" << ENDL;
}

int main()
{
    COUT << "Step in Main" << ENDL;
    exp3();
}