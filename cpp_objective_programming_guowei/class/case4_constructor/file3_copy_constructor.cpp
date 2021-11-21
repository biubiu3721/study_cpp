
/**
 * Note
 * 3.3 copy construction fucntion.
 *     * X::X(X &), X::X(const X &)
 *     * Usage:
 *         * Three situation:
 *            * A a1(a2);
 *            * func(A a);
 *            * return (A) a;
 *         * Attention:
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
        B(const B & rb)
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

int main()
{
    Case1();
    // 调用create函数时，编译器偷偷地增加了一个参数，传入了p的地址，直接在函数内部构造了temp对象
    B temp = func();
    COUT << func().v << ENDL;
}


