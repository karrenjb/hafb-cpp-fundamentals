#include "containers.h"
#include "csvstream.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>

void Load_Data(std::vector<Data> &data, const std::string &input_file)

{
csvstream csvinput(input_file); //open file
  //Rows have a key = column name, value = cell data
  std::map<std::string, std::string> row;
  Data temp;
  //Extract the animal column
  while(csvinput >> row)
  {
    //The key is the column name
    std::cout << row["id"] << ", "<< row["name"] << ", "<< row["animal"] << std::endl;
    temp.id = row["id"];
    team.name = row["name"];
    team.animal = row["animal"];
    data.push_back(temp);       //load Data struct

  }
}