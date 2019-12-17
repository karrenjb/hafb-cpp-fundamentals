#ifndef FACTOR_H_
#define FACTOR_H_
// #pragma once
#include <array>

//Prototypes
int Sum(int num1, int num2);

void UpdateStep(int& step);

int Max2(int num1, int num2);

int Max3(int num1, int num2, int num3);

int Max10(std::array<int, 10> nums);

void ClearElements(std::array<int, 10>& nums);

#endif /* !FACTOR_H_ */
