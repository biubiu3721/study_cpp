
#include <iostream>
#include <string.h>
#define COUT std::cout
#define ENDL std::endl


class CEmployee
{
    private:
        char sz_name[30];
    public:
        int salary;
    void setName(char * name);
    void getName(char * name);
    void AverageSalary(CEmployee e1, CEmployee e2); 
};

void CEmployee::setName(char* name)
{
    strcpy(sz_name, name);
}
void CEmployee::getName(char* name)
{
    strcpy(name, sz_name);
}
void CEmployee::AverageSalary(CEmployee e1, CEmployee e2)
{
    COUT << e1.sz_name << ENDL;
    salary = (e1.salary + e2.salary) / 2;
}

int main()
{
    CEmployee e;
    // // ‘char CEmployee::sz_name [30]’ is private within this context
    // strcpy(e.sz_name, "Tom123456789"); 
    e.setName((char*)"Tom"); // ok
    e.salary = 5000; // ok
    return 0; //
}
