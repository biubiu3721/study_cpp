#include <iostream>
#include <string.h>
#define COUT std::cout
#define ENDL std::endl

class Test
{
    public:
        Test(int n) // This is a type conversion constructor.
        {
            COUT << "first constructor" << ENDL;
            COUT << "Got " << n << ENDL;
        }; //
        Test(int n, int m)
        {
            COUT << "second constructor" << ENDL;
            COUT << "Got " << n << " " << m <<  ENDL;
        };
        Test()
        {
            COUT << "Third constructor" << ENDL;
            COUT << "Got: " << ENDL;
        };

};

static void Case0()
{
    // TODO: Test array = 1? // Equal to Test array(1).
    //     Because copy constructor is shared by all class. 
    //     So this sentence is optimized by compiler 
    //     "from Test temp(param); Test arry = temp" to "Test array(param)".
    //     Refer to type conversion construtor. 
    COUT << " Test array[3] = {(3,2), Test(1, 2)};:" << ENDL;
    Test array0[3] = {3, Test(1, 2)};
    Test array1[3] = {(3, 4), Test(1, 2)};
    Test array2[3] = {{3, 4}, Test(1, 2)};
    COUT << "Test a = 1:" << ENDL;
    Test a = 1;
    COUT << "Test b = Test(1):" << ENDL;
    Test b = Test(1);
}

static void Case1()
{
    COUT << "pArray *******************************" << ENDL;
    Test * pArray[3] = {new Test(4), new Test(1, 2)};
    COUT << pArray[0] << " " << pArray[1] << " " << pArray[2] << ENDL;
}


int main()
{
    Case0();
    Case1();
}


