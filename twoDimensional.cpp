// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Dec 2019
// This is program average calculator out of two-dimensional list

#include <iostream>

template <int rows, int columns>
float Average(int (&array)[rows][columns]) {
    // This calculates average of all integer items in a two-dimensional array

    int total = 0;
    int items = 0;
    float average = 0;

    for (size_t repeater = 0; repeater < rows; ++repeater) {
        for (size_t number = 0; number < columns; ++number) {
            total += array[repeater][number];
            items += 1;
        }
    }

    // Calculates average
    average = total / items;

    // output
    return average;
}

main() {
    // This creates a two-dimensional list based on user input, fills it with
    //    random numbers from -50

    // Sets seed as time
    srand(time(NULL));

    // variables
    const int row = 2;
    const int columns = 2;
    int numbers[row][columns];
    int repeater;
    int number;
    float average;

    // Welcome
    std::cout << "\nI cannot ask for your input. I have chosen, " << row <<
                 " and " << columns << " as number of rows and columns."
                 << std::endl;

    // process
    for (repeater = 0; repeater < row; repeater++) {
        for (number = 0; number < columns; number++) {
            numbers[repeater][number] = rand() % 50 + 1*;
        }
    }

    average = Average(numbers);

    // output
    std::cout << "\nThe average is " << average << std::endl;
}
