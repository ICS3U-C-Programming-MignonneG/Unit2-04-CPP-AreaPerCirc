// Copyright (c) 2026 Mignonne Gihozo All rights reserved.
//
// Created by: Mignonne Gihozo
// Created on: 2026-09-30
// This program calculates the area and perimeter of a circle using math pi

#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    // set the radius
    double radius;
    double perimeter;
    double area;

    std::cout << "Enter the radius (cm): ";
    std::cin >> radius;

    // calculate the perimeter (circumference) and area of the circle
    perimeter = 2 * M_PI * radius;
    area = M_PI * std::pow(radius, 2);

    // display the results
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nFor a radius of " << radius << " cm:\n";
    std::cout << "The perimeter is: " << perimeter << " cm\n";
    std::cout << "The area is: " << area << " cm²\n";

    return 0;
}
