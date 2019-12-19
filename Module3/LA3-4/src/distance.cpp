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

Distance operator - (Distance lhs, Distance rhs)
{
    int ft = lhs.feet_ - rhs.feet_;
    float in = 0;
    
    if(lhs.inches_ < rhs.inches_)
    {
        ft -= 1;
        in = (lhs.inches_ + 12) - rhs.inches_;
    }
   
    return Distance(ft, in);
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

 Distance Distance::operator = (Distance& rhs)
 {
     std::cout << "Assignment operator invoked!" << std::endl;
     feet_ = rhs.feet_;
     inches_ = rhs.inches_;
     return Distance(feet_, inches_);
 }

Distance::Distance (const Distance& dist)
{
    std::cout << "Copy Constructor invoked!" << std::endl;
    feet_ = dist.feet_;
    inches_ = dist.inches_;
}