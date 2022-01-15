/*
    * 需要“=” 两边类型不同
    * 只能重载为成员函数。
*/
#include <cstring>
#include "stdio.h"
class String {
    private:
        char * str;
    public:
        String():str(new char[1]) // with init.
        {
            str[0] = 0;
        }
        /*
        for better understanding
        "const char * p" means:
        "const (remove char) * p"
        equal to "const * p"
        In the same way：
        char * const p means：
            (remove char * ) const p
            equal to "const p";
        */
        const char * c_str()
        {
            return str;
        };
        String & operator = (const char *s);
        String & operator = (const String & s);
        ~String() {delete [] str;}
        int operator = (int)
        {
            printf("just for fun");
        }

};


String & String::operator = (const char * s)
{
    delete [] str;
    str = new char[strlen(s) +1];
    strcpy(str, s);
    return * this;
}

String & String::operator = (const String & s)
{
    if(this == & s)
    {
        return * this;
    }
    delete [] str;
    str = new char[strlen(s.str) +1];
    strcpy(str, s.str);
    return * this;
}

int main()
{
    String S1, S2;
    S1 = "this";
    S2 = "that";
    S1 = S2;
}