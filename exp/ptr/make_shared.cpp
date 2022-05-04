#include "../../include/log.h"
#include <memory>
#include <vector>
int main()
{
    std::shared_ptr<int> foo = std::make_shared<int> (10);
    std::shared_ptr<int> foo2(new int(100)); // 
    auto bar = std::make_shared<int>(20); // const -> obj -> ptr
    auto baz = std::make_shared<std::pair<int, int>> (30, 40); // const -> obj -> ptr
    DEBUG() << foo << " " << *foo2 <<  ENDL;
    DEBUG() << foo2 << " " << *foo2 <<  ENDL;
    DEBUG() << bar << " " << *bar << ENDL;
    DEBUG() << baz << " " << baz->first << " " << baz->second << ENDL;
    ;
}