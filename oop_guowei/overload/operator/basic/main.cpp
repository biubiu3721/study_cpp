

// 运算符重载的是指是函数重载
// 可以重载为普通函数， 也可以重载为成员函数
// 把操作符的操作数转换成运算符函数的参数。
// 运算符被多次重载时， 根据实参的类型，决定调用哪个。
// T operator * (param)
#include "../../include/log.h"

class Complex
{
    public:
        double real, imag;
        Complex(double r = 0.0, double i = 0.0): real(r), imag(i){}
        Complex operator-(const Complex & c);
};
Complex operator+(const Complex &a, const Complex &b)
{
    return Complex(a.real + b.real, a.imag + b.imag);
}
Complex Complex::operator-(const Complex &c)
{
    return Complex(real - c.real, imag - c.imag);
}

int main()
{
    Complex num0(1,2);
    Complex num1(2,3);
    Complex num2 = num0 + num1;
    Complex num3 = num0 - num1;
    COUT << num2.real << ENDL;
    COUT << num3.real << ENDL;
}