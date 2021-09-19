// Copyright 2021 Lily Liu All rights reserved
//
// Created by: Lily Liu
// Created on: Sept 2021
// This program calculates the area circle using the radius
//     Radius given by user

#include <iostream>
#include <cmath>


int main() {
    int radius;
    double area;

    // input
    std::cout << "Enter the radius of the circle (cm): ";
    std::cin >> radius;

    // process
    area = M_PI * pow(radius, 2);

    // output
    std::cout << "The area is " << area << " cm²." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
