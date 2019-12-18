#include <array>
#include <iostream>
#include <string>
#include <fstream>  //for I/O files
#include <iomanip>

// using namespace std;

/**
 * @brief Shows how to define and use an ofstream object to write to a file.
 *
 * We will define ofstream objects and then see some of the operators
 * and functions that work with these objects.
 *
 * @return int 0 means function exited with success
 */
int main() {
  // arrays that contain data
  const int kMaxSize = 20;
  std::array<int, kMaxSize> commute_minutes = {22, 51, 63, 12, 17, 93, 45,
                                          18, 66, 45, 43, 77, 38, 43,
                                          52, 21, 8,  19, 7,  14};

  std::array<int, kMaxSize> commute_miles = {8,  22, 28, 2,  4,  62, 15, 6, 42, 28,
                                        16, 43, 27, 18, 41, 8,  3,  5, 2,  4};

  std::array<std::string, kMaxSize> towns = {
      "Bountiful",    "Centerville",        "Clinton",       "South Weber",
      "West Point",   "Cottonwood Heights", "Murray",        "Salt Lake City",
      "South Jordan", "West Jordan",        "American Fork", "Lindon",
      "Payson",       "Pleasant Grove",     "Spanish Fork",  "Harrisville",
      "Ogden",        "Pleasant View",      "Riverdale",     "South Ogden"};

  std::array<std::string, kMaxSize> names = {
      "Walter", "Chris", "Stan",   "Mary",  "Shelly", "Kim",  "Kelly",
      "George", "Sam",   "Walter", "Ann",   "Laura",  "Paul", "Phillip",
      "Susan",  "Hal",   "Olivia", "Polly", "Roy",    "Scott"};

  // create a variable of type ofstream

  std::ofstream commute_file;

  // open the file commute.txt

  commute_file.open("../commute.csv");

  if(commute_file.fail())
  {
    std::cout << "Unable to open file commute.csv to write.\nShutting Down\n";
    return 1;
  }

  // write commute_minutes and commute_miles to the file commute.txt

  for(int index = 0; index < kMaxSize; ++index)
  {
    // std::cout << commute_minutes[index] << ", " << commute_miles[index]<< std::endl;
    commute_file << commute_minutes[index] << ", " << commute_miles[index]<< std::endl;
  }
  commute_file.close();

  // create a variable of type ofstream and open the file town.txt

  std::ofstream towns_file;

  towns_file.open("../towns.csv");

  if(towns_file.fail())
  {
    std::cout << "Unable to open file towns.csv to write.\nShutting Down\n";
    return 1;
  }

  // write the towns to the file town.txt

  for(int index = 0; index < kMaxSize; ++index)
  {
    // std::cout << towns[index] << ", " << names[index]<< std::endl;
    towns_file << towns[index] << ", " << names[index]<< std::endl;
  }
  towns_file.close();

  // create a variable of type ofstream and open the file Utahinfo.csv

  //TASK: Create a csv record file as follows:
  //Header: minutes, miles, min/miles, name, town
  //Follow by the actual data Record

  std::ofstream commute_data;

  commute_data.open("../Utahinfo.csv");

  if(commute_data.fail())
  {
    std::cout << "Unable to open file Utahinfo.csv to write.\nShutting Down\n";
    return 1;
  }
  
  std::string header = "Version, Minutes, Miles, Min/Mile, Name, Town";
  commute_data << header << std::endl;  //Header for the output file

    for(int index = 0; index < kMaxSize; ++index)
  {
    commute_data << "V1, " << commute_minutes[index] << ", " << commute_miles[index] << ", "  //Field 0 and 1
    << static_cast<float>(commute_minutes[index])/commute_miles[index] << ",  "   //Field 2
    << names[index] << ", " << towns[index] << std::endl;   //Field 3 and 4 with endl
  }
  commute_data.close();

  // write commute_minutes, commute_miles, and towns to the file commute.txt

  // do computations and add labeling to data before writing to file

  // write a report to the commute_report.txt file. Include name, town,
  // commute_minutes, commute_miles, and average minutes per mile to the file
  // commute.txt

  return 0;
}
