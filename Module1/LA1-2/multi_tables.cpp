/**
 * @file multi_tables.cpp
 * @author your name (you@domain.com)
 * @brief Display multiplication tables based upon user input
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const int kMax = 10;

int main()
{
    int number;
    cout << "Enter a value to print multiplication tables: " <<endl;
    cin >> number;
    for (int num1 = 1; num1 <= number; ++num1)  //rows
    {
        for (int num2 = 1; num2 <= kMax; ++num2)  //columns
        {
            cout << setw(3) << (num1 * num2) << " ";
        }
        cout << endl;
    }
    return 0;
}