#include <array>    //for array containers
#include <iostream> //basic I/O
#include <string>   //strings
#include <fstream>  //file stream

// using namespace std;

/**
 * @brief Shows how to define and use an ifstream object to read from a file.
 *
 * We will define ifstream objects and then see some operators
 * and methods that work with these objects.
 *
 * @return int 0 means function exited with success
 */
const int kMaxSize = 24;

int main() {
  // create an ojbect of type ifstream
  std::ifstream in; //inputFileStream
  std::ifstream in2; //inputFileStream number 2
  std::ifstream in_name_age; //inputFileStream number 3
  
  // open the file age.txt
  in.open("../age.txt"); //relative path form the executable
  in2.open("../name.txt");  //open second input file
  in_name_age.open("../name_age.txt");

  if(in.fail())
  {
    std::cout << "Unable to open file age.txt.\n Shutting down.\n";
    return 1;
  }
  
  if(in2.fail())
  {
    std::cout << "Unable to open file name.txt.\n Shutting down.\n";
    return 1;
  }

  if(in_name_age.fail())
  {
    std::cout << "Unable to open file name_age.txt.\n Shutting down.\n";
    return 1;
  }

  // read from the age file and store values in an array
  std::array<int, kMaxSize> ages;
  std::array<std::string, kMaxSize> names;
  
  ages.fill(-1); //initializes elements to -1
  names.fill("Blank");

  int age_size = 0;
  int name_size = 0;
 
  // in >> ages[age_size];
  // age_size++;
  // in >> ages[age_size];
  // in >> ages[age_size++];

  //read to the end of the file
  while(age_size<kMaxSize && in >> ages[age_size])
  {
    age_size++;
  }

  while(name_size<kMaxSize && in2 >> names[name_size])
  {
    name_size++;
  }

  // print out the values in the array
  for(auto age : ages)
  {
    std::cout << age << std::endl;
  }
  
  for(auto name : names)
  {
    std::cout << name << std::endl;
  }
  
  //close input file

  in.close();  
  in2.close();

  // read to the end of the file


  // print out the valid values in the array


  // print out the all the values in the array


  // Define an ifstream object and open the file name.txt



  // read one name, store it in the array, and print it



  // read the rest of the names in the file


  // print valid elements in the names array


  
  // print all the elements in the names array


  // Use a file with mixed values


  // Define an ifstream object and open the file name_age.txt





  // // reset age and name arrays
  ages.fill(-1);
  names.fill("Blank");

  int index = 0;

  while(index < kMaxSize && in_name_age >> ages[index])
  {
    in_name_age.ignore();
    std::getline(in_name_age, names[index]);
    index++;
  }
  // // read all the values from the name_age.txt file

  // // print valid elements in the names and ages array
for(int num = 0; num < index; num++)
{
  std::cout <<"Age: " << ages[num] << " for name: " << names[num] << std::endl;
}

  // // print all elements in the names and ages array

  in_name_age.close();


  return 0;
}
