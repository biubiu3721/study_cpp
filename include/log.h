#include <iostream>
#include <string.h>
#define COUT std::cout
#define ENDL std::endl


#define PRINT() \
    std::cout << "[PRINT]" << __FILE__ << ": " << __func__ << "(): " << __LINE__ << ": "
#define DEBUG() \
    std::cout << "[DEBUG]" << __FILE__ << ": " << __func__ << "(): " << __LINE__ << ": "
#define INFO() \
    std::cout << "[INFO]" << __FILE__ << ": " << __func__ << "(): " << __LINE__ << ": "
#define WARNING() \
    std::cout << "[INFO]" << __FILE__ << ": " << __func__ << "(): " << __LINE__ << ": "
#define ERROR() \
    std::cout << "[INFO]" << __FILE__ << ": " << __func__ << "(): " << __LINE__ << ": "
#define FATAL() \
    std::cout << "[INFO]" << __FILE__ << ": " << __func__ << "(): " << __LINE__ << ": "

