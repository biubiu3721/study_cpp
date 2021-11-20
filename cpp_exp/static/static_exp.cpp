/**
 * Static
 *     var c/c++
 *                      global_var    local_var     class var               
 *        available     proj -> file  func -> func  class -> whole       
 *        existance     Keep whole   func -> whol   func  -> whole   Keep Whole
 *     func c/c++
 *                       global_func    class_func    
 *        available      project->file  local -> global
 *        existance      keep whole     keep whole
*/

#include <iostream>
#define COUT std::cout
#define ENDL std::endl;
void fn();
static int n;
static int nn;

int main()
{
    COUT << n << ENDL;
    n = 20;
    COUT << n << ENDL;
    fn();
    COUT << n << ENDL;
}
void fn()
{
    static int local_n;
    n++;
    COUT << n << ENDL;
    COUT << "local_n " << local_n << ENDL;
}