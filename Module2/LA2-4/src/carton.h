#pragma once

//Create your first class
class Carton
{
    private:
        double length_;
        double width_;
        double height_;

    public:
        //Constructor: build/create your object
        Carton();
        
        //Second Constructor
        Carton(double length, double width, double height);

        //Getters
        double length();    //returns length
        double width();     //returns width
        double height();    //returns height

        //Setters
        void set_length(double length);
        void set_width(double width);
        void set_height(double height);

        //Other methods
        void ShowInfo();

};  //must have a ";"