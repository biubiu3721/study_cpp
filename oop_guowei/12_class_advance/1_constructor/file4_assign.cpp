#include "../../include/log.h"

class MyClass 
{
    public:
        int n;
        MyClass()
        {
            ;
        }
        MyClass(const MyClass &r_in)
        {
           n = 2 * r_in.n;           
        }

};


int main()
{
    MyClass c1, c2;
    c1.n = 5; 
    c2 = c1;
    MyClass c3(c1);
    COUT << "c2.n " << c2.n << "," << "c3.n " << c3.n << ENDL;
}
