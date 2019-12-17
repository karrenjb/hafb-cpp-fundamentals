#include <iostream>
#include <string>

// using namespace std;

/**
 * @brief Shows how to define and use a string object
 *
 * We will define string variables and then see what operators and
 * functions work with these variables.
 *
 * @return int 0 means function exited with success
 */
int main() {
  // create a variable of type string
  std::string name = "Weber Waldo";

  // print it out
  std::cout << name << std::endl;

  // // get a string from a user
  std::cout << "Enter your name: " << std::endl;
  // to get strings with spaces, use 'getline()' instead
  getline(std::cin, name);
  std::cout << "Your name is: " << name << std::endl;
  
  // add two strings together
  std::string title = "Dr.";
  std::string formal;
  formal = title + " " + name;
  std::cout << "Hello: " << formal << std::endl;

  // how long is the string
  std::cout << "The size of name is: " << name.size() << std::endl;
  std::cout << "The size of name is: " << title.size() << std::endl;
  std::cout << "The length of title is: " << title.length() << std::endl;
  std::cout << "The length of formal is: " << formal.length() << std::endl;

  // use [] to get an individual character
  std::cout << "The first character of name is: " << name[0] << std::endl;
  std::cout << "The third character of name is: " << name[2] << std::endl;

  // get name and commute information from a user
  int minutes, miles;
  std::cout << "Enter your full name: "<<std::endl;
  getline(std::cin, name);
  std::cout << "How long is your commute in minutes? "<<std::endl;
  std::cin >> minutes;
  std::cout << "How many miles is your commute? "<<std::endl;
  std::cin >> miles;
  std::cout << name << " has a " << minutes << " minute, " << miles << " mile commute"<< std::endl;

  // the string function find
  std::string story = "The dragons are flying over the mountains.  They are hunting for a "
  "place to settle for the waldo night.  What they see is the endless horizon.";
  
  std::cout << "waldo is at location: " << story.find("waldo") << std::endl;

  // the string function replace

  std::cout << story << std::endl;
  std::string nickname = "waldo";
  std::string new_nickname = "jarold";
  story.replace(story.find(nickname), nickname.size(), new_nickname);  //replace waldo with XXXXX
  std::cout << story << std::endl;

  return 0;
}

/*
      "The dragons are flying over the mountains. They are hunting for a "
      "place to settle for the waldo night. What they see is endless horizon."
*/
