// type conversion constructor.
#include "../../include/log.h"

class Complex
{
    public:
        double real, imag;
        Complex(int r)
        {
            COUT << "IntConstructor r Called , param is " << r  << ENDL;
            real = r, imag = 0;
        }
        Complex(double r, double i)
        {
            COUT << "IntConstructor r, j Called, param is :" << r << ", " << i << ENDL;
            real = r, imag = i;
        }
};

int main()
{
    Complex c1(7, 8);
    Complex c2 = 12;
    c1 = 9;
    COUT << c1.real << "," << c1.imag << ENDL;
    return 0;
}
