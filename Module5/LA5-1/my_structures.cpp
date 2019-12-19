#include <iostream>
using namespace std;

struct Part
{
   int model_number;
   int part_number;
   float cost;

};

struct Car
{
   Part door;
   Part window;
   Part tires;
};

// Local Prototypes

int main()
{

   Part part1;

   part1.model_number = 6244;
   part1.part_number = 373;
   part1.cost = 45.00;

   std::cout << "Model Number: " << part1.model_number << " Part Number: " 
      << part1.part_number << " Cost: " << part1.cost << std::endl;

   Part part2 = {6277, 781, 32.10};
   std::cout << "Model2 Number: " << part2.model_number << " Part2 Number: " 
      << part2.part_number << " Cost2: " << part2.cost << std::endl;

   // Part part3;
   // part3 = part2;

   // std::cout << "Model3 Number: " << part3.model_number << "Part3 Number: " 
   //    << part3.part_number << "Cost3: " << part3.cost << std::endl;

   Car sedan;
   sedan.door.part_number = 101;
   sedan.window.part_number = 200;
   sedan.tires.cost = 89.90;

   


   return 0;
}
