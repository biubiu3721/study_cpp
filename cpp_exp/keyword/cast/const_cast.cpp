#include "include/log.h"
#include <string.h>
int main()
{
    char* p = const_cast<char*>("New Year");
    const std::string s = "Inception";
    std::string& p = const_cast<std::string&>(s);
    // typeid(&s) is const string*
    std::string* ps = const_cast<std::string*>(&s);
}