/**
 * DSC Assessment 1 - Course 1 - Session 2.1
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com> <github.com/AH3laly>
 */

// Question 10:
// Write a program to make a simple calculator using
// switch-case. The calculator takes the operation
// (+ or – or * or /) and takes the two input arguments and
// print the results.

#include <stdio.h>

int main(){
    char operator;
    float num1, num2,result;
    
    // Prompt the user to enter a positive number
    printf("Enter mathematical operation Ex: 10 + 5: \n");
    printf("Allowed operators: + - * / \n");    
    scanf("%f %c %f", &num1, &operator, &num2);
    
    switch(operator){
        case '+':
            result = num1 + num2;
        break;
        case '-':
            result = num1 - num2;
        break;
        case '*':
            result = num1 * num2;
        break;
        case '/':
            result = num1 / num2;
        break;
        default:
            printf("Invalid Operation.");
            return 0;
    }
    printf("Result: %.2f\n", result);
    return 0;
}
