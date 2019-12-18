#pragma once
#include <iostream>

class Counter
{
private:
    unsigned int count_;
public:
    Counter() : count_(0) {};
    Counter(unsigned int count) : count_(count) {};
    ~Counter() {std::cout << "Bye\n";};
    
    //Setters and Getters
    unsigned int count() {return count_;}
    void set_count(unsigned int count){count_=count;}
    
    //Operators
    // void operator ++() { ++count_;}
    Counter operator ++();  //supports prefix ++ only
    Counter operator ++(int);
};

