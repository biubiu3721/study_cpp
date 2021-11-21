
/**
 * @Note
 *      * object
 *          * mem alloc
 *            * member variable 
 *              Like structure variables, objects take up the same amount 
 *              of memory space as the sum of all member variables.
 *            * member funcion
 *              member function only have one instance in ddr. 
 *              They are not counted into.
 */

#include <iostream>
class CRectangle
{
    public:
        int w, h;
        int Area()
        {
            return w * h;
        }
        int Parimeter()
        {
            return 2 * (w * h);
        }
        void Init(int w_, int h_)
        {
            w = w_;
            h = h_;
        }
//type definition statement: type + type_name. So ";" is necessary. refer to typedef.
}; 


int main()
{
    std::cout <<" start in main" << std::endl;
    int w, h;
    CRectangle r;
    std::cin >> w >> h;
    r.Init(w, h);
    std::cout << r.Area() << std::endl << r.Parimeter() << std::endl;
}