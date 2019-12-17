#include <iostream>
#include "cars.h"

int HorsePower()    // "standard" namespace
{
    return 150;
}   

int lamborghini::HorsePower()   // using namespace lamborghini;
{
    return 750;
}   

void lamborghini::cout()
{
    std::cout << "Super Car " << std::endl;
}

int porsche::HorsePower()   // using namespace porsche;
{
    return 700;
}   