#include <iostream>
#include "distance.h"
// using namespace std;

// Main Function
int main() 
{

  Distance d1 (34, 9.5);
  
  d1.ShowDist();

  Distance d2(10, 8.5);
  d2.ShowDist();

  Distance d3;
  d3 = d1 + d2;
  d3.ShowDist();

  Distance d4;
  d4 = d1 + d2 + d3;
  d4.ShowDist();

  //Display int with stdout
  std::cout << d4 << std::endl;

  Distance d5;
  d5 = d4 - d3;
  d5.ShowDist();

  if (d2 < d1)
  {
    std::cout << d2 << " is less than " << d1 << std::endl;
  }

  if (d1 > d2)
  {
    std::cout << d1 << " is greater than " << d2 << std::endl;
  }

  if (d1 == d1)
  {
    std::cout << d1 << " is equal to " << d1 << std::endl;
  }
    
  return 0;
}