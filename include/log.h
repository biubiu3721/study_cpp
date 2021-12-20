#include <iostream>
#include <string.h>
#define COUT std::cout
#define ENDL std::endl


#define PRINT() \
    std::cout << "[PRINT][" << __FILE__ << ": " << __LINE__ << "]: " << __func__ << "(): " 
#define DEBUG() \
    std::cout << "[DEBUG][" << __FILE__ << ": " << __LINE__ << "]: " << __func__ << "(): "
#define INFO() \
    std::cout << "[INFO][" << __FILE__ << ": " << __LINE__ << "]: " << __func__ << "(): "
#define WARN() \
    std::cout << "[WARN][" << __FILE__ << ": " << __LINE__ << "]: " << __func__ << "(): "
#define ERROR() \
    std::cout << "[ERROR][" << __FILE__ << ": " << __LINE__ << "]: " << __func__ << "(): "
#define FATAL() \
    std::cout << "[FATAL][" << __FILE__ << ": " << __LINE__ << "]: " << __func__ << "(): "

