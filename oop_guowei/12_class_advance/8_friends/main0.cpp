#include "include/log.h"

class CCar;
class CDriver
{
    public:
        void ModifyCar( CCar * pCar);
};
class CCar
{
    private:
        int price;
    friend CDriver; // friend class
    friend int MostExpensiveCar(CCar cars[], int total); // Declare.
    friend void CDriver::ModifyCar(CCar * pCar); // Declear.
};

void CDriver::ModifyCar(CCar * pCar){pCar->price += 1000;};
int MostExpensiveCar( CCar cars[], int total)
{
    int tmpMax = -1;
    for( int i = 0; i < total; ++i)
    {
         if(cars[i].price > tmpMax)
         {
             tmpMax = cars[i].price;
         }
    }
    return tmpMax;
}

int main()
{
    INFO() << "Start"<<ENDL;
    return 0;
}