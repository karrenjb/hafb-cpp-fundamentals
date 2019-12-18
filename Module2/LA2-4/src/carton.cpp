#include "carton.h"
#include <iostream>
#include <string>

//Constructors have access to private data members

//Do not use the 'static' key word 
// const double Carton::kMaxSize = 100;
const double Carton::kMinLength = 0.25;
const double Carton::kMinWidth = 0.25;
const double Carton::kMinHeight = 0.25;


Carton::Carton()
{
    length_ = 0;
    width_ = 0;
    height_ = 0;
}

Carton::Carton(double length, double width, double height)
{
    try
    {
        SetMeasurements(length, width, height);
    }
    catch(std::out_of_range e)
    {
        std::cerr << e.what() << '\n';
        throw;
    }
}

Carton::~Carton()
{

}

double Carton::length()
{
    return length_;
}

double Carton::width()
{
    return width_;
}

double Carton::height()
{
    return height_;
}

void Carton::set_length(double length)
{
    if(length < kMinLength)
    {
        std::string error_msg = "Length must be greater than " + std::to_string(kMinLength);
        throw std::out_of_range(error_msg);
    }
    length_ = length;
}
        
void Carton::set_width(double width)
{
    if(width < kMinWidth)
    {
        std::string error_msg = "Width must be greater than " + std::to_string(kMinWidth);
        throw std::out_of_range(error_msg);
    }
    width_ = width;
}

void Carton::set_height(double height)
{
    if(height < kMinHeight)
    {
        std::string error_msg = "Width must be greater than " + std::to_string(kMinHeight);
        throw std::out_of_range(error_msg);
    }
    height_ = height;
}

void Carton::ShowInfo()
{
  std::cout << "Box Length: " << length() << std::endl;
  std::cout << "Box Width: " << width() << std::endl;
  std::cout << "Box Height: " << height() << std::endl;
  std::cout << "Box Volume: " << Volume() << std::endl;
}

void Carton::SetMeasurements(double length, double width, double height)
{
    if(length <= 0 || width <=0 || height <=0)
    {
        throw std::out_of_range("All measurements must be greater than 0");
    }
    //Good to Go
    length_ = length;
    width_ = width;
    height_ = height;
}

double Carton::Volume() const
{
    return length_ * width_ * height_;
}