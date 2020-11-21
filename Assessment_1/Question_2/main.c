/**
 * DSC Assessment 1 - Course 1 - Session 2.1
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com> <github.com/AH3laly>
 */

// Question 2:
// Write a program that print your name and your grade in a new line.

#include <stdio.h>

int main(){

    char* name;
    int grade;
    printf("Enter Your Name and Grade, EX: Helaly 50: ");
    
    scanf("%s", &name);
    scanf("%d", &grade);

    printf("Name: %s\n", &name);
    printf("Grade: %d\n", grade);
    
    return 0;
}
