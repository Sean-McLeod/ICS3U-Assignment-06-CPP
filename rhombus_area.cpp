// Copyright (c) 2021 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on January 2021
// This program calculates the area of a rhombus

#include <iostream>
#include <string>

float RhombusArea(float firstDiangonal, float secondDiangonal) {
    // this function calculates the area of a rhombus
    float area;

    area = (firstDiangonal*secondDiangonal)/2;

    return area;
}


main() {
    // this function gets the two diagonals
    std::string userFirstDiagonal;
    std::string userSecondDiagonal;
    int intuserFirstDiagonal;
    int intuserSecondDiagonal;
    float finalRhombusArea;

    std::cout << "This program calculates the area of a rhombus"
              << "\n" << std::endl;

    // input
    std::cout << "Enter in the first diagonal(cm): ";
    std::cin >> userFirstDiagonal;
    std::cout << "Enter in the second diagonal(cm): ";
    std::cin >> userSecondDiagonal;
    std::cout << std::endl;

    try {
        intuserFirstDiagonal = std::stoi(userFirstDiagonal.c_str());
        intuserSecondDiagonal = std::stoi(userSecondDiagonal.c_str());

        if (intuserFirstDiagonal > 0 && intuserSecondDiagonal > 0) {
            // call functions
            finalRhombusArea = RhombusArea(intuserFirstDiagonal,
                                           intuserSecondDiagonal);

            // output
            std::cout << "The area of this rhombus is " << finalRhombusArea
                      << "cm²" << std::endl;
        } else {
            std::cout << "The values should be positive" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "This is an invalid number. Please try again" << std::endl;
    }
}
