#include <iostream>
#include <map>      //for maps
#include <string>

int main()
{
    //Maps are a key->value pair elements
    std::map<int, std::string> info;
    //To add elements to the map, use insert() which takes a pair of key-value
    // To make a key->value pair, use make_pair() built-in function
    info.insert(std::make_pair(1, "Waldo Weber"));
    info.insert(std::make_pair(2, "Utah Jazz"));
    std::cout << "Size of the map: " << info.size() << std::endl;
    //Find key value
    auto position = info.find(1);
    if(position != info.end())
    {
        std::cout << "Found! The key is " << position->first 
            << ", and the value is " << position->second << std::endl;
    }
    std::cout << std::endl;

    std::cout << "Using iterator: " << std::endl;
    //Find key value
    auto position = info.find(1);
    for(auto it = std::begin(info); it != std::end(info); ++it)
    {
        std::cout << it->first << " " << it->second << "\t";
 
    }
    

    return 0;
}