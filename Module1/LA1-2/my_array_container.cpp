/**
 * @file my_array_container.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <cmath>
#include <iomanip>
#include <array>    //array container
using namespace std;

int main()
{
    // To create arrays with library
    // array<type, numOfElements> name;
    array<double, 5> grades {22.1, 22, 33.4, 25, 34};

    cout << "Size of Array: "<< grades.size() << endl;
    cout << "Array empty? " << grades.empty() << endl;

    for(int index = 0; index <grades.size(); ++index)
    {
        cout << grades[index] <<endl;
    }
    // for each loop
    cout <<"For each: " << endl;
    for(auto grade : grades)
    {
        cout << grade <<endl;
    }
    return 0;
}