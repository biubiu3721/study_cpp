
/**
 * Note
 * 3.3 copy construction fucntion.
 *     * X::X(X &), X::X(const X &) 
 *     * Usage:
 *         
 *         * Three situation:
 *            * A a1(a2);
 *            * func(A a);
 *            * return (A) a;
 *         * Attention:
 *             * param must be "&".
 *             * The Copy Constructor must be exist, if you don't write it, the compiler will write.
 *             * No param constructor may not be exist, if you don't write "any" constructor, 
 *               then the compiler will write.
 *             * Copy construction fucntion won't be called in assigin sentence. 
 *               It is only called in initialization sentence.
 */

#include "../../include/log.h"

class Complex
{
    public:
        double real, imag;
    Complex()
    {
        COUT << "default Constructor Called" << ENDL;
    };
    Complex(const Complex & c) // param must be reference.
    {
        real = c.real;
        imag = c.imag;
        COUT << "Copy Constructor Called" << ENDL;
    }

};

class B
{
    public:
        int v;
        B(int n){v = n;};
        B(const B &rb) // must be &.
        {
            v = rb.v;
            COUT << "Copy Constructor Called" << ENDL;
        }

};

static void Case0()
{
   Complex c1;
   Complex c2(c1);
}

void Func(Complex a){};
static void Case1()
{
    COUT << "In Case1" << ENDL;
    Complex c2;
    Func(c2);
}

B func()
{
    COUT << "in func" << ENDL;
    
    B b(4);

    return b;
}

class A
{

    public:
        int x;
        // : is a way to init member variable especially const var.
        //  equal to { int x = x_, ...}
        A(int x_):x(x_) 
        {
            COUT << x << " Constructor called" << ENDL;
        }
        A(const A & a)
        {
            x = 2 + a.x;
            COUT << "Copy Called" << ENDL;
        }
        ~A(){ COUT << x << " Destructor called." << ENDL;}
};

A f()
{
    A b(10);
    return b;
}
void Case3()
{
    COUT << "Step in Case3" << ENDL;
    A a(1);
    a = f(); 
    COUT << "Step out Case3" << ENDL;
}
int main()
{
    Case1();
    // 调用create函数时，编译器偷偷地增加了一个参数，传入了p的地址，直接在函数内部构造了temp对象
    B temp = func();
    COUT << func().v << ENDL;
    Case3();
}


