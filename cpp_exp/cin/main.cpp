#include <stdio.h>
#include <iostream>
#include <string>

#define _COUT std::cout 
#define _CIN std::cin
#define _ENDL std::endl
int main()
{
	bool flag = 1;
	short number = 0;
	std::cout << "input flag:" << std::endl;
	
	std::cin >> flag;
	std::cout << "after cin, flag is :" << flag <<std::endl;
    _COUT << "cin fail(): " << _CIN.fail() << _ENDL;
	flag="abc";
    _CIN.sync();
	_CIN.ignore(10000, "\n");
	std::cout << "after flag= ??,  flag is :" << flag << std::endl;
	std::cin >> number;
	std::cout << "number is :" << number << std::endl;


}
