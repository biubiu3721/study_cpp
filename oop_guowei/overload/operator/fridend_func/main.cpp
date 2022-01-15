#include "../../include/log.h"
#include <cstdio>

class Complex
{
  private: // [encap], [anti-inherit]
    double real, imag;
  protected: // [half encap], [inherit]
      int test;
  public: // [anti encap], [inherit]
  // IO
    Complex(double r, double i): real(r), imag(i)
    {
        ;
    } // [poly]
    double get_r()
    {
        return real;
    };
    double get_i()
    {
        return imag;
    }
    // action
    // [poly]
    Complex operator+(double r)
    {
    return Complex(real + r, imag);
    }
    // anti-encap
    friend Complex operator+(double r, const Complex & c);


};

Complex operator+(double r, const Complex & c)
{
    return Complex( c.real + r, c.imag);
}


int main()
{
    Complex c_num(1, 2);
    c_num = c_num + 1;
    return 0;
}