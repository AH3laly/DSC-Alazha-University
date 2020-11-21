/**
 * DSC Assessment 1 - Course 1 - Session 2.1
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com> <github.com/AH3laly>
 */

// Question 8:
// Write a program that reads a positive integer and
// checks if it is a perfect square.

// Solution Algorithem:
// INPUt NUMBER
// Get the Absolute value of the Square root of the NUMBER
// Multiply the square root by itself
// If the product is equal to the original number THEN the number is perfect.

#include <stdio.h>
#include <math.h>

int main(){
    int input, theSquareRoot;

    // Prompt the user to enter a positive number
    printf("Enter a positive number: ");
    scanf("%d", &input);

    if(input <= 0){
        printf("Invalid Number, Only positive numbers allowed\n");
        return 0;
    }
    
    // Get the square root of the number, with ignoring the fractions
    theSquareRoot = (int)sqrt((double)input);

    if((theSquareRoot * theSquareRoot) == input){
        printf("The number %d is a perfect number\n", input);
    } else {
        printf("The number %d is NOT a perfect number\n", input);
    }
    return 0;
}
