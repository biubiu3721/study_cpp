#include<stdio.h>

//因为初学者需要保持前进，而不是一上来就高山仰止。一“仰止”就动不了了，高山再高也等于零。

int main()
{
	char str[100]="Hello World";
//Bjarne在他的The C++ Programming Language里面给出过一个助记的方法： 
//把一个声明从右向左读。 
    
    //1. p is pointer to char that const.
 	//const char *p=str;
    //2. 同上因为C++里面没有const*的运算符，所以const只能属于前面的类型。 
    //C++标准规定，const关键字放在类型或变量名之前等价的。
    // p is a pointer to const char.
	//char const *p=str;
	// 3. 
    char *const p=str;
	p[0]='X';
	//p=&str[1];
	printf("%s\n",p);
	return 0;
}
// sum up
//const char *p; // 声明一个指向字符或字符串常量的指针(p所指向的内容不可修改)
//char const *p;// 同上
//char * const p;//声明一个指向字符或字符串的指针常量，即不可以修改p的值，也就是地址无法修改。

