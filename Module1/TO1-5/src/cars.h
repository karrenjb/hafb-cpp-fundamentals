#ifndef CARS_H_
#define CARS_H_

int HorsePower();   // "nameless, :: " namespace

namespace lamborghini
{
    int HorsePower();   //Inside Lamborghini namespace
    void cout();
}

namespace porsche
{
    int HorsePower();   //Inside Porsche namespace
}

#endif /* !CARS_H_ */
