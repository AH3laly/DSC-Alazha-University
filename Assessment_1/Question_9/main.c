/**
 * DSC Assessment 1
 * Solution By Abdelrahman Helaly <AH3laly@gmail.com>
 */

// Question 9:
// Write a program that reads a student grade percentage
// and prints "Excellent" if his grade is greater than or equal
// 85, "Very Good" for 75 or greater; "Good" for 65, "Pass"
// for 50, "Fail" for less than 50.

#include <stdio.h>

int main(){
    int grade;

    // Prompt the user to enter a positive number
    printf("Enter your grade percentage: ");
    scanf("%d", &grade);

    if(grade >= 85){
        printf("Grade: Excellent\n");
    } else if(grade >= 75){
        printf("Grade: Very Good\n");
    } else if(grade >= 65){
        printf("Grade: Good\n");
    } else if(grade >= 50){
        printf("Grade: Pass\n");
    } else if(grade < 50){
        printf("Grade: Fail\n");
    }
    
    return 0;
}
