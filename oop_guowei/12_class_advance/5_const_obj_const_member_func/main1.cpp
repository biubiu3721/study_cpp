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
    // 常量对象只能执行常量成员函数。比如常量引用对象，
    // 可以保证原始对象不背修改。
    const CTest objTest1;
    // 非常量对象首先执行非常量成员函数。
    CTest objTest2;
    DEBUG() << objTest1.GetValue() << "," << objTest2.GetValue() << ENDL;
}

