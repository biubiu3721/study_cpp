
#include "../../include/log.h"


class CTyre 
{
    private:
        int radius;
        int width;
    public:
        CTyre(int r, int w): radius(r), width(w)
        {

        };
};

class CEngine
{

};

class CCar
{
    private:
        int price;
        CTyre tyre;
        CEngine engine;
    public:
        CCar(int p, int tr, int w);
};

CCar::CCar(int p, int tr, int w):price(p), tyre(tr, w)
{
    COUT << "CCar::Ccar()" << ENDL;
};
int main()
{
    CCar car(20000, 17, 225);
    COUT << "Test" << ENDL;
}