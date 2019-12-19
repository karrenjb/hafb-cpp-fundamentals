#include <iostream>

struct Distance
{
    int feet;
    float inches;
};

struct Room
{
    Distance length;
    Distance width;
};

struct Home
{
    Room master;
    Room kitchen;
    
};

void ShowHomeRoom(const Home& house);

int main ()
{
    Home house;

    house.kitchen.length.feet = 20;
    house.kitchen.length.inches = 30.0;
    
    house.kitchen.width.feet = 20;
    house.kitchen.width.inches = 40.0;
    
    ShowHomeRoom(house);

    return 0;
}

void ShowHomeRoom(const Home& house)
{
    std::cout << "House Info: " << std::endl;
    std::cout << "Kitchen: " << house.kitchen.length.feet << " Feet " 
        << house.kitchen.length.inches << " Inches Long and " 
        << house.kitchen.width.feet << " Feet " 
        << house.kitchen.width.inches << " Inches Wide." << std::endl;
}
