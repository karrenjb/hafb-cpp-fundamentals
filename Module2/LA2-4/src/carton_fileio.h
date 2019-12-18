#pragma once

#include <array>
#include <string>
#include "carton.h"

const int kMaxArraySize = 20;

std::string ReadDataFormatFromFile(std::string filename,    //By Value
            std::array<Carton, kMaxArraySize>& cartons,     //By Reference
            int& rec_num);                                  //By Reference

void WriteDateToFile(std::string filename,                  //By Value 
            const std::array<Carton, kMaxArraySize>& cartons,       //By Const Reference
            int rec_num);                                          //By Value

