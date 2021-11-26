#include "../../include/log.h"

class CCar
{
    public:
        int price;
        void SetPrice(int p);

};

void CCar::SetPrice(int p)
{
    price = p;
}

struct SCar
{
   int price;
};

void SetPrice(struct SCar* thi, int p) // this is keyword.
{
    thi->price = p;
}

int case0()
{
    COUT << "Get into case0."  << ENDL;
    CCar car;
    car.SetPrice(20000);
    COUT << "case0: " << car.price << ENDL;
    return 0;
}

int case1()
{
    COUT << "Get into case1."  << ENDL;
    struct SCar a_car;
    SetPrice(&a_car, 20000);
    COUT << "case1: " << a_car.price << ENDL;
    return 0;
}

int main()
{
    case0();
    case1();
    return 0;

}