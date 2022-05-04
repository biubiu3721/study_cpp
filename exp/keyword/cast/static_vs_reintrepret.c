#include "include/log.h"

class A
{
    public:
    int m_a;
};

class B
{
    public:
    int m_b;
};

class C : public A, public B 
{

};

int main()
{
    C c0;
    C c1; // c1.addr = c0.addr + sizeof(c0);
    C* c2 = new C;
    C* c3 = new C;
    printf("%p, %p, %p \n", &c0, reinterpret_cast<B*>(&c0), static_cast<B*>(&c0));
    //>> 0x7fff55e460c8, 0x7fff55e460c8, 0x7fff55e460cc 
    printf("%p %p %p \n", &c1, c2, c3);
    //>> 0x7fff55e460d0 0x56367e451eb0 0x56367e451ed0 // 32B align?
}