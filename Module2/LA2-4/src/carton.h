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
        //Getters
        double length();    //returns length
        double width();     //returns width
        double height();    //returns height


};  //must have a ";"