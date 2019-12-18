#include <iostream>
#include "height.h"
#include "counter.h"

int main()
{
    Height h1(70);
    Counter c1, c2;
    std::cout << "\nCounter1: " << c1.count() << std::endl;
    std::cout << "Counter2: " << c2.count() << std::endl;
    ++c1;
    ++c2;
    ++c2;
    ++c2;
    std::cout << "\nCounter1: " << c1.count() << std::endl;
    std::cout << "Counter2: " << c2.count() << std::endl;
    c1++;
    c2++;
    std::cout << "\nCounter1: " << c1.count() << std::endl;
    std::cout << "Counter2: " << c2.count() << std::endl;
    return 0;
}