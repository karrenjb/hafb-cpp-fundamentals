#pragma once
#include <iostream>

//Create your first class
class Carton
{
    private:
        double length_;
        double width_;
        double height_;

    public:
        //Static Constants
        // static const double kMaxSize;
        static const double kMinLength;
        static const double kMinWidth;
        static const double kMinHeight;

        //Constructor: build/create your object
        Carton();
        
        //Second Constructor
        Carton(double length, double width, double height);

        //Destructor
        ~Carton();

        //Getters
        double length();    //returns length
        double width();     //returns width
        double height();    //returns height

        //Setters
        void set_length(double length);
        void set_width(double width);
        void set_height(double height);

        //Other methods
        void SetMeasurements(double length, double width, double height);
        void ShowInfo();
        double Volume() const;
        void WriteData(std::ostream &out) const;


};  //must have a ";"