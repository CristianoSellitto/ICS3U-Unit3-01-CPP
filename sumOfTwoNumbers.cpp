// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in October 2022
// A program that finds the sum of two user inputted numbers

#include <iostream>

float firstNumber;
float secondNumber;
float sum;

int main() {
    // Finds the sum of two numbers the user sends

    std::cout << "Enter first number to add: ";
    std::cin >> firstNumber;
    std::cout << "Enter second number to add: ";
    std::cin >> secondNumber;
    std::cout << std::endl;
    sum = firstNumber + secondNumber;
    std::cout << firstNumber << " + "
              << secondNumber << " = " << sum << std::endl;

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
