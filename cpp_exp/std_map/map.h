/*
Collect all map experiments header files.
Introduction:
1. Map override []
2. Map is a container.
3.
*/
// Include
//1. Related
//2. System
//3. C Include
#include <cstdio>
#include <cstring>
#include <cmath>
# include <algorithm>
//4. C++ include
#include <iostream>
#include <map> // >= c++11
//5. local.

#define mem(x,y) memset(x,y,sizeof(x))

/*****************************************
C++ pair用法
 pair 默认对first升序，当first相同时对second升序；
类模板：template <class T1, class T2> struct pair
参数：T1是第一个值的数据类型，T2是第二个值的数据类型。
功能：pair将一对值组合成一个值，这一对值可以具有不同的数据类型（T1和T2），
两个值可以分别用pair的两个公有函数first和second访问。
i具体用法：
1.定义（构造）
    1     pair<int, double> p1;  //使用默认构造函数
    2     pair<int, double> p2(1, 2.4);  //用给定值初始化
    3     pair<int, double> p3(p2);  //拷贝构造函数

2.Access the two items( By first and second );

    1 pair<int, double> p1;  //使用默认构造函数
    2 p1.first = 1;
    3 p1.second = 2.5;
    4 cout << p1.first << ' ' << p1.second << endl;

3.赋值operator = ：
   （1）利用make_pair：
         1 pair<int, double> p1;
         2 p1 = make_pair(1, 1.2);
---------------------------------------*/
int Basic();
/*
* Test the begin and end feature.
*/
int MapStudyBeginEnd();
/* Test map::empty */
int MapStudyEmpty();
/* Test container size() */
int MapStudySize();

/* Test Map compare */
int MapStudyCmp();
