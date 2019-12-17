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

int Max10(std::array<int, 10> nums)
{
  int max = 0;
    for(auto num : nums)
  {
    if(max <= num)
    {
      max = num;
    }
  }
  return max;
}

void ClearElements(std::array<int, 10>& nums)
{
  for(int index = 0; index < nums.size(); ++index)
  {
    nums[index] = -99; //set values to -99
  }
}