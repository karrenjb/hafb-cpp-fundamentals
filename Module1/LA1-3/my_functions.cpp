#include <iostream>
#include "my_functions.h"
using namespace std;

// Function Definitions

/**
 * @brief Calculate the sum of 2 numbers
 * 
 * @param num1 : First Number
 * @param num2 : Second Number
 * @return int 
 */
int Sum(int num1, int num2)  //Pass both parameters by value (make your own copy)
{
  return (num1 + num2);
}


/**
 * @brief Increments the value of step by 1
 * 
 * @param step current step value
 */
void UpdateStep(int& step)  //take the address of the parameter
{
    cout << "Current step: " << step << endl;
    step++;
    // step += 1;
    // step = step + 1;
    cout << "New step: " << step <<endl;
}
