/**
 * @file my_array.cpp
 * @author your name (you@domain.com)
 * @brief learn about C-style arrays and C++ array container
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const int kMaxNum = 5;
float average = 0;
int sum = 0;

int main()
{
    // C-style
    // Array notation: type name[elements];
    // To access elements, use Index notation:  begins at 0
    // int grades[kMaxNum] = {10, 20, 30, 40, 50} //array of 5 integers initialized
    // int grades[] = {10, 20, 30, 40, 50}  //array of 5 integers set by the compiler
    // int grades[kMaxNum] = {10, 20, 30}  //array of 5 integers, initialize 3, rest 0
    int grades[kMaxNum];  //array of 5 integers
    const int kMaxRow = 3;
    const int kMaxCol = 5;

    cout << "Enter your exam grades" << endl;
    for (int num = 0; num < kMaxNum; ++num)
    {
        cout << "Enter "<< num + 1 << " grade: " <<endl;
        cin >> grades [num]; //Access each element using []
        average += grades[num];
        sum += grades[num];
    }
        average = average/kMaxNum;
        cout << "The average of the array elements is: " << average << endl;
        // Cast or changes variable type from integer to float to preserve fraction
        // static_cast <type>(variable)
        average = static_cast<float>(sum)/kMaxNum;
        cout << "The average of the array elements is: " << average << endl;
   
    // 2D Arrays; type name [row][col]
    int bi_array[kMaxRow][kMaxCol] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    for (int row = 0; row < kMaxRow; ++row)
    {
        for (int col = 0; col < kMaxCol; ++col)
        {
            cout << "Array element at [" << row << "]" <<
            "["<<col << "]" <<bi_array[row][col] <<endl;
        }
    }
    


    return 0;
}