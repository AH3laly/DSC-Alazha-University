/**
 * DSC Assessment 1
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com> <github.com/AH3laly>
 */

// Question 1: 
// Write a program that take two integers from the user and print the results of this question:
// Result = (num1 + num2)*3) - 10

#include <stdio.h>


int main(){

    // Declare the variables
    int num1, num2, result;

    // Propmt the user to enter two integers
    printf("Enter two integers: ");

    scanf("%d %d", &num1, &num2);
    result = ((num1 + num2)*3)-10;

    printf("Result: %i\n", num1 + num2);
    return 0;
}
