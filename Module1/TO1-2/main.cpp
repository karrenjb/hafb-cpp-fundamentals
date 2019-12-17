/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-12-17
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <cmath>
#include <iomanip>
#include "factor.h"
using namespace std;



int main()
{
    unsigned int CountCatch;
    
    FactorMod3();
    FactorModX(3);
    FactorModX(5);
    FactorModXRange(3,60);
    CountCatch=GetFactorModXRange(3,80);
    cout << "The Count Catch is: " << CountCatch << endl;

    // or you could use auto CountCatch = GetFactorModXRange(x,x);  to automatically capture the parameter type.

    return 0;
}