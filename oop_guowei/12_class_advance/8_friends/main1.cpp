#include "../../include/log.h"
// tips: class 声明的时候加逗号是因为class 一种typedef.
// 不可循环定义， 起码空间无法确定。
class CPoint
{
    double x,y;
    friend class CCircle; // Not work.
};
class CCircle
{
    double r;
  public:
    CPoint center;
};

int main()
{
    CCircle a_shape;
    a_shape.center.x = 0;

}