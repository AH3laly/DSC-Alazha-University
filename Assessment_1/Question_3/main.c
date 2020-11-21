/**
 * DSC Assessment 1 - Course 1 - Session 2.1
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com> <github.com/AH3laly>
 */

// Question 3:
// Write a program for converting temperature from degrees Celsius to degrees Fahrenheit,
// given the formula:
// F = C x 9 / 5 + 32

#include <stdio.h>

int main(){

    float input, result;
    printf("Enter Templrature in Celsius: ");
    scanf("%f", &input);
    result = input * 9 / 5 + 32;
    printf("%.2f\n", result);
    return 0;
}
