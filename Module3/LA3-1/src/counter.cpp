#include "counter.h"
#include <iostream>

Counter Counter::operator ++()  //Prefix ++ operator
{
    // ++count_;
    // Counter temp;           //Dummy value
    // temp.count_ = count_;   //Set the Value
    // return temp;            //Return the object

    return Counter(++count_);   //Unnamed temp object
}

Counter Counter::operator ++(int)   //Postfix 
{
    // count_++;
    // Counter temp;           //Dummy value
    // temp.count_ = count_;   //Set the Value
    // return temp;            //Return the object

    return Counter(count_++);
}