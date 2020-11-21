/**
 * DSC Assessment 1
 * Solution By Abdelrahman Helaly <AH3laly@gmail.com>
 */

// Question 16:
// Write a program to reverse a number.

#include <stdio.h>

int main(){

    int input, rightMost, result = 0;

    printf("Enter a number to reverse: ");
    scanf("%d", &input);

    while(input != 0){
        
        // Get the first number
        rightMost = input % 10;

        // Remove the first number
        input /= 10;

        // Add Zero to right most
        result *= 10;

        // Replace the Right Most zero with the first number
        result += rightMost;
    }

    printf("Result: %d\n", result);
    return 0;
}
