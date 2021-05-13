// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: May 2021
// This program loops to find factorial of a number

#include <iostream>
#include <string>

int main() {
    // This program loops to get the factorial of a number
    std::string lengthAsString;
    int lengthAsInteger;
    std::string widthAsString;
    int widthAsInteger;

    // Input
    std::cout << "Enter the length of a rectangle: ";
    std::cin >> lengthAsString;
    std::cout << "\nEnter the width: ";
    std::cin >> widthAsString;

    // Process and Output
    try {
        lengthAsInteger = std::stoi(lengthAsString);
        widthAsInteger = std::stoi(widthAsString);
        if (lengthAsInteger == widthAsInteger) {
            std::cout << "\nThst rectangle is a square." << std::endl;
        } else {
            std::cout << "\nThat rectangle is not a square." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid input" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
