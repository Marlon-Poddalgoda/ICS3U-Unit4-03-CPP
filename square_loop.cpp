// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on December 2020
// This program calculates the square of all positive integers
//      between 0 and a user input

#include <iostream>
#include <string>

#include <cmath>

int main() {
    // This program calculates the square of all positive integers
    //      between 0 and a user input

    std::cout << "This program calculates the square of all "
                 " positive integers between 0 and a "
                 "user input." << std::endl;

    // variable declarations
    int loopCounter;
    int squareNum = 0;
    std::string userInput;
    int userInputInt;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> userInput;
    std::cout << "" << std::endl;

    // process
    try {
        userInputInt = std::stoi(userInput);

        if (userInputInt >= 0) {
            for (loopCounter = 0; loopCounter <= userInputInt; loopCounter++) {
                squareNum = pow(loopCounter, 2);
                std::cout << loopCounter << "² = " << squareNum << std::endl;
            }
        } else {
            // output
            std::cout << userInputInt << " is not a positive integer!"
                      << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That's not a number! Try again." << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Thanks for playing!" << std::endl;
}
