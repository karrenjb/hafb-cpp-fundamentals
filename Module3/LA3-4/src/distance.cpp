// distance.cpp
// increment counter variable with ++ operator
// uses unnamed temporary object
#include <iostream>
#include <cmath>
using namespace std;
#include "distance.h"

/**
 * @brief Show the distance and inches in feet'-inches" format.
 * 
 */
void Distance::ShowDist() const
{
    std::cout << feet() << "\' " << inches() << "\"" << std::endl;
}

/**
 * @brief Plus + Operator for Distance objects
 * 
 * @param d2 Second distance object
 * @return Distance : Sum of self + d2 objects
 */
Distance Distance::operator + (Distance rhs) const
{
    int feet = feet_ + rhs.feet_;
    float inches = inches_ + rhs.inches_;
    
    //Update values IF inches > 12
    if(inches >= 12.0)
    {
        inches -= 12.0;
        feet++;
    }
    
    Distance temp(feet, inches);
    
    return temp;
}

std::ostream& operator <<(std::ostream& os, const Distance& distance)
{
    //Recommended NOT to include a "\n" or endl character;
    os << "Feet: " << distance.feet_ << " Inches: " << distance.inches_;

    return os;
}

Distance Distance::operator - (Distance rhs) const
{
    int feet = feet_ - rhs.feet_;
    float inches = 0;
    
    //Update values IF inches > 12
    if(inches_ < rhs.inches_)
    {
        feet -= 1;
        inches = (inches_ + 12) - rhs.inches_;
    }
    
    Distance temp(feet, inches);
    
    return temp;
}

void Distance::update_distance(int ft, float in)
{
    set_feet(ft);
    set_inches(in);
}

 bool Distance::operator < (Distance rhs) const
 {
     return (((feet_ * 12) + inches_) < ((rhs.feet_ * 12) + rhs.inches_));
 }

 bool Distance::operator > (Distance rhs) const
 {
     return (((feet_ * 12) + inches_) > ((rhs.feet_ * 12) + rhs.inches_));
 }

 bool Distance::operator == (Distance rhs) const
 {
     return (((feet_ * 12) + inches_) == ((rhs.feet_ * 12) + rhs.inches_)) ? true : false;  //Another way of accomplishing the same thing
 }