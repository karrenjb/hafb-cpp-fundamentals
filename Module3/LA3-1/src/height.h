#pragma once

class Height
{
private:
    double inches_;

public:
    Height()  {inches_ = 0;}
    Height(double inches) : inches_(inches){}
    ~Height() {}

    //Setter & Getter
    double inches() const {return inches_ ;}
    void set_inches(double inches) {inches_ = inches;}
    
    //Other Methods
    friend void print_feet(Height h1);
};
void print_feet2(Height h1);