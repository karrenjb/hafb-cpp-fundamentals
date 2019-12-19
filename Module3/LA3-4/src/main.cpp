#include <iostream>
#include "distance.h"
// using namespace std;

// Main Function
int main() 
{

  Distance d1 (34, 9.5);
  Distance d2;

  d2 = d1;  //Assignment operator invoked
  std::cout << d2 << " and " << d1 <<std::endl;
  Distance d3 = d2; //Assignment operator NOT invoked
  std::cout << d3 << " and " << d2 <<std::endl;
  //Initialization is NOT assignment
  Distance d4(d2);  //
  std::cout << d4 << " and " << d2 <<std::endl;
  
  return 0;
}