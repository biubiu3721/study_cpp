#include "../../../include/log.h"
#include <typeinfo>
void swap(int &x, int &y)
{
    int tmp = x;
    x  =  y;
    y = tmp;
}
void swap(double &x, double &y)
{
    double tmp = x;
    x  =  y;
    y = tmp;
}


template <class T0, class T1>
void swap_tpl(T0 & x, T1 & y)
{
    T0 a = x;
    T1 b = y;
    DEBUG() << typeid(a).name() << ": " << a << ENDL;
    DEBUG() << typeid(b).name() << ": " << b << ENDL;
}


// #define
template <class T>
T MaxElement(T a[], int size)
{
    T tmpMax = a[0];
    for(int i = 1; i < size; i++)
    {
        if(tmpMax < a[i])
        {
            tmpMax = a[i];
        }
    }
    return tmpMax;
}
template <class T>
T Inc(T n)
{
    return n + 1;
}

int main()
{
    int  a = 1;
    double b = 2;
    swap_tpl(a, b);

    DEBUG() << Inc<double>(4) << ": " << ENDL;
}