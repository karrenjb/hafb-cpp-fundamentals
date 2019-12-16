/**
 * @file Factor_3.cpp
 * @author your name (you@domain.com)
 * @brief Store number of times a number is divisible by 3 in a counter
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
using namespace std;

unsigned int count = 0;

int main()
{
    for(unsigned int num = 1; num <=30; ++num)
    {
        if (num % 3==0)
        {
            count++;
        }
    }
    cout << "Result is: " << count << endl;
    
    return 0;
}