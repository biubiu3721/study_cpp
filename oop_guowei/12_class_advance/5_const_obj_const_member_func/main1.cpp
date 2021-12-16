#include "include/log.h"

class CTest
{
    private:
        int n;
    public:
        CTest() {n = 1;};
        int GetValue() const {return n;}
        int GetValue() {return 2 * n;}
};

int main()
{
    INFO() << "Start Program." << ENDL;   
    const CTest objTest1;
    CTest objTest2;
    DEBUG() << objTest1.GetValue() << "," << objTest2.GetValue() << ENDL;
}

