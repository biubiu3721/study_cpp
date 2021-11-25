// CAUTION3: In static funciton, it can't call static var and static function.
//  
#include "../../include/log.h"

class CRectangle
{
    private:
        int w, h;
        static int nTotalArea; // CAUTION1: sizeof won't count static var.
        static int nTotalNumber; // CAUTION2: static var is essencially a global variable.
    public:
        CRectangle(int _w, int _h);
        CRectangle(CRectangle & r);
        ~CRectangle();
        static void PrintTotal();
};

CRectangle::CRectangle(int _w, int _h)
{
    w = _w;
    _h = _h;
    nTotalNumber ++;
    nTotalArea += w * h;
}
CRectangle::CRectangle(CRectangle & r)
{
  w = r.w;
  h = r.h;
  nTotalNumber++;
  nTotalArea += w * h;
}
CRectangle::~CRectangle()
{
    nTotalNumber--;
    nTotalArea -= w * h;
}


int main()
{
    CRectangle r1(3, 3), r2(2, 2);
    // COUT << CRectangle::nTotalNumber; // wrong, private.
    CRectangle::PrintTotal();
    r1.PrintTotal();
    return 0;
}
