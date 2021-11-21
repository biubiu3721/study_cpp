/**
 * N.B.
 *     * It is not the constructor that alloc the memory for member variables.
 */

#include <iostream>
#include <string.h>
#define COUT std::cout
#define ENDL std::endl

class Complex
{
    private:
        double real, imag;
    public:
        void Set(double r, double i);
        Complex(double r, double i);
        Complex(double r);
        Complex(Complex c1, Complex c2);
}; // The compiler automatically generates the default constructor.

Complex::Complex(double r, double i)
{
    real = r; imag = i;
}
Complex::Complex(double r)
{
    real = r;
    imag = 0;
}
Complex::Complex(Complex c1, Complex c2)
{
    real = c1.real + c2.real;
    imag = c1.imag + c2.imag;
}

// error: no matching function for call to ‘Complex::Complex()’
// Complex * pc = new Complex; 
Complex c1(2, 4), c2(2, 5);
Complex * pc = new Complex(3, 4);

class Sample
{
    int x;
    public:
        Sample()
        {
            COUT << "Constructor 1 Called" << ENDL;
        }
        Sample(int n)
        {
            x = n;
            COUT << "Constructor 2 Called" << ENDL;
        }
};

int main()
{
    Complex c1(3), c2(1, 0), c3(c1, c2);
    Sample array1[2];
    COUT << "step1" << ENDL;
    Sample array2[2] = {4, 5};
    COUT << "step2" << ENDL;
    Sample array3[2] = {3};
    COUT << "step3" << ENDL;
    Sample *array4 = new Sample[2];
    delete [] array4;
    COUT << "step4" << ENDL;
    return 0;
}