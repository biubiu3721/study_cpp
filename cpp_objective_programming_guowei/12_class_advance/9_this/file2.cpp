#include "../../include/log.h"

class Complex
{
    public:
        double real, imag;
        Complex(double r, double i):real(r), imag(i) // constructor function, no type no return.
        {
            ;
        }
        Complex AddOne()
        {
            this->real++;
            this->Print();
            return *this; // NEW_TECH.
        }
        void Print()
        {
            COUT << real << "," << imag << ENDL;
        } 
};

int main()
{
    Complex c1(1, 1), c2(0,0);
    COUT << "c2 is " << c2.real << ", " << c2.imag <<ENDL;
    c2 = c1.AddOne();
    COUT << "c1 is " << c1.real << ", " << c1.imag <<ENDL;
    COUT << "c2 is " << c2.real << ", " << c2.imag <<ENDL;
    return 0;
}