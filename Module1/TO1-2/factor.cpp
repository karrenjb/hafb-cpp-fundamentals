/**
 * @file factor.cpp
 * @author your name (you@domain.com)
 * @brief Calculate the number of instances divisible by 3 in the range 1 to 30
 * @version 0.1
 * @date 2019-12-17
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include "factor.h"
using namespace std;

void FactorMod3()
{
    unsigned int count = 0;

    for(unsigned int num = 1; num <=30; ++num)
    {
        if (num % 3==0)
        {
            count++;
        }
    }
    cout << "Result is now: " << count << endl;
    
}

/**
 * @brief Calculate the number of instances divisible by input parameter in the range 1 through 30
 * 
 * @param mod_number : the divisible number 
 * @return * void 
 */

void FactorModX(int mod_number)
{
   // knows about mod_numbers
   unsigned int count = 0;

    for(unsigned int num = 1; num <=30; ++num)
    {
        if (num % mod_number==0)
        {
            count++;
        }
    }
    cout << "Result is now: " << count << endl;
     
}

/**
 * @brief Calculate the number of instances divisible by input parameter in the range 1 through max range
 * 
 * @param mod_number # the divisible number
 * @param max_range # the max range to check
 */
void FactorModXRange(int mod_number, int max_range)
{
   // knows about mod_numbers
   unsigned int count = 0;

    for(unsigned int num = 1; num <=max_range; ++num)
    {
        if (num % mod_number==0)
        {
            count++;
        }
    }
    cout << "Result is now: " << count << endl;
     
}

/**
 * @brief Get the Factor Mod X Range object
 * 
 * @param mod_number # the divisible number
 * @param max_range # max range
 * @return unsigned int : number of instances
 */

unsigned int GetFactorModXRange(int mod_number, int max_range)
{
   // knows about mod_numbers
   unsigned int count = 0;

    for(unsigned int num = 1; num <=max_range; ++num)
    {
        if (num % mod_number==0)
        {
            count++;
        }
    }
    cout << "Result is now: " << count << endl;
    return count;
}