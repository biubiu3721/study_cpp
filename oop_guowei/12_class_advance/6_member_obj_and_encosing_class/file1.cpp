#include  "../../include/log.h"
class CTyre
{
    public:
        CTyre(){ COUT << "CTyre constructor" << ENDL;}
        ~CTyre(){COUT << "CTyre destructor" << ENDL;}
    
};

class CEngine
{
    public:
        CEngine(){ COUT << "CEngine constructor" << ENDL;}
        ~CEngine(){COUT << "CEngine destructor" << ENDL;}
};

class CCar
{
    private:
        CEngine engine;
        CTyre tyre;
    public:
        CCar(){ COUT << "CCar constructor" << ENDL;}
        ~CCar(){ COUT << "CCar constructor" << ENDL;}
        
};


int main()
{
    CCar car;
    return 0;

}
// [Nov 27 2021][00:12:33]file1.cpp: 13: CEngine(): CEngine constructor
// [Nov 27 2021][00:12:33]file1.cpp: 5: CTyre(): CTyre constructor
// [Nov 27 2021][00:12:33]file1.cpp: 23: CCar(): CCar constructor
// [Nov 27 2021][00:12:33]file1.cpp: 24: ~CCar(): CCar constructor
// [Nov 27 2021][00:12:33]file1.cpp: 6: ~CTyre(): CTyre destructor
// [Nov 27 2021][00:12:33]file1.cpp: 14: ~CEngine(): CEngine destructor