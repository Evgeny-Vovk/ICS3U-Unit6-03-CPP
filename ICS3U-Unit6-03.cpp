// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : January 2023
// ICS3U-Unit6-03.cpp File, learning functions with parameters in C++.

#include <array>
#include <iostream>
#include <random>

template <size_t N>
int smallestNumber(std::array<int, N> randomNumbers) {
    int answer = 100;
    for (int number : randomNumbers) {
        if (answer > number) {
            answer = number;
        }
    }
    return answer;
}

int main() {
    // creating variables
    std::array<int, 10> randomNumbers;
    int randomNumber;
    float sum = 0;
    float average;
    int answer;

    for (int counter = 0; counter < 10; counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());  // mersenne_twister
        std::uniform_int_distribution<int> idist(0, 100);
        randomNumber = idist(rgen);
        randomNumbers[counter] = randomNumber;
        sum += randomNumber;
        std::cout << "Generated number: " << randomNumber << "\n";
    }

    answer = smallestNumber(randomNumbers);
    std::cout << "\nThe smallest number of all numbers is " << answer << ".";

    std::cout << "\n\n\nDone.\n";
}
