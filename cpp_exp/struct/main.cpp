#include <stdio.h>

struct student
{
    int number;
    int score;
}stu1, stu2;

int main()
{
    int a = 0;
    int b = 1;
    stu1 = {a * b, 2};
    stu2 = {2, a * b};
}
