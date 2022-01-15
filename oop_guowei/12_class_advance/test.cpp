#include "../../include/log.h"

class Base{
    public:
        int n;
        Base(int i): n(i)
        {
            COUT << "Base " << n << " constructed" << ENDL;
        }
        ~Base()
        {
            COUT << "Base " << n << " deconstructed" << ENDL;
        }
};

class Derived: public Base
{
    public:
        Derived(int i): Base(i)
        {
            COUT << " Derived constructed" << ENDL;
        }
        ~Derived()
        {
            COUT << " Derived deconstructed"<< ENDL;
        }
};


class Skill
{
  public:

};

class FlyBug
{
    int m_wings;
    Skill sk1, sk2;
  public:
    FlyBug(int legs, int color, int  wings);
};
FlyBug::FlyBug( int legs, int color, int wings)
{

    m_wings = wings;
    DEBUG() << "constucting FlyBug" << ENDL;
}

int main()
{
    Derived obj(3);
    FlyBug a_fly_bug(1,10,100);
    return 0;
}