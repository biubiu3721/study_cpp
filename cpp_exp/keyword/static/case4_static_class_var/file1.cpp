#include <iostream>
#define COUT std::cout
#define ENDL std::endl

class MyClass
{
    public:
        MyClass(int a, int b, int c);
        void GetSum();
    private:
        int a, b, c;
        static int sum;
};
int MyClass::sum = 0;
MyClass::MyClass(int a, int b, int c)
{
   this-> a = a;
   this-> b = b;
   this-> c = c;
   sum += a + b + c;
}

void MyClass::GetSum()
{
    COUT << "Sum = " << sum << ENDL;
}

int main()
{
    MyClass M(1, 2, 3);
    M.GetSum();
    MyClass N(4, 5, 6);
    N.GetSum();
    M.GetSum();
}