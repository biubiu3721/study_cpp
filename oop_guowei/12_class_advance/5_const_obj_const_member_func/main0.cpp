#include "include/log.h"

class Sample
{
    public:
        int value;
        int GetValue() const;
        void func() {};
        Sample(){};

};

int Sample::GetValue() const
{
    PRINT() "Start to Get." << ENDL;
    return value;
}

int main()
{
    INFO() << "Start Program." << ENDL;
    const Sample o;
    // o.value = 100;
    // o.func(); // wrong.
    o.GetValue();

}

