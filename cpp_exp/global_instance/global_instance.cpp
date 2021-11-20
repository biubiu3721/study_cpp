


#include <stdio.h>
#include <iostream>

class glb_class
{
    public:
    glb_class(){ std::cout << "glb class constructed." << std::endl;}
};
glb_class glb_instance;
int main()
{
    std::cout << "start in main" << std::endl;

}