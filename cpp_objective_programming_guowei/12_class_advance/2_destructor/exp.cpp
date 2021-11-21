// destructor.
#include "../../include/log.h"

class String
{
    private:
        char *p;
    public:
        String()
        {
            p = new char[10];
        }
        ~ String();
        
};
String::~String()
{
    delete [] p;
}

class CTest
{
    public:
        ~CTest() { COUT << "Destructor called" << ENDL;}
};


// Exp1 Report.
// * Result:
//    End Main
//    Destructor called
//    Destructor called
void exp1()
{

    CTest array[2];
    COUT << "End Main" << ENDL;
}

int ID = 0;
class CMyClass
{
    int m_ID;
    public:
        CMyClass()
        {
            m_ID = ID++;
            COUT << "Constructed " << this << "," << m_ID << ENDL;
        };
        ~CMyClass()
        {
            COUT << "Destructed " << this << "," << m_ID << ENDL;
        }
        CMyClass(CMyClass & a)
        {
            m_ID = ID++;
            COUT << "Constructed by Copy Constructor." << this << "," << m_ID << ENDL;
        }
};

CMyClass obj;
CMyClass func(CMyClass sobj)
{   
    COUT << "Step in func" << ENDL;
    COUT << "Step out func" << ENDL;
    return sobj;
}
// Exp2:
// Constructed0x55ada91b1158,0
// Constructed by Copy Constructor.0x7ffe61745b00,1
// Step in func
// Step out func
// Constructed by Copy Constructor.0x7ffe61745b04,2
// Destructed0x7ffe61745b04,2
// Destructed0x7ffe61745b00,1
// Step out exp
// Destructed0x55ada91b1158,2
void exp2()
{
    obj = func(obj);
    COUT << "Step out exp" << ENDL;
}



