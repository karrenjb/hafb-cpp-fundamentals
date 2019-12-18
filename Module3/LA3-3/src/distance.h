#pragma once
#include <iostream>

class Distance
{
private:
    int feet_;
    float inches_;
    /* data */
public:
    Distance() : feet_(0), inches_(0) {};
    Distance(int feet, float inches) : feet_(feet), inches_(inches) {};
    ~Distance(){};

    //Getters and Setters
    int feet() const {return feet_;}
    void get_feet(int feet) {feet_ = feet;}
   
    float inches() const {return inches_;}
    void set_inches(float inches) {inches_ = inches;}

    //Other Methods
    void ShowDist() const;
};
