/**
 * DSC Assessment 1 - Course 1 - Session 2.1
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com> <github.com/AH3laly>
 */

// Question 6:
// Write a program that print the relation between two
// integer number if those numbers are equal, not equal and
// which one contain the higher value.

// Solution Algorithm:
// Get Num1, Num2.
// SET relation = num1 - num2
// If relation is 0 then they are equal
// If relation is greater that zero then num1 is larger
// If relation is greater that zero then num1 is smaller

#include <stdio.h>

int main(){
    int num1, num2, relation;

    // Prompt the user to enter a Character
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    
    relation = num1 - num2;
    if(relation == 0){
        printf("Both numbers are equal.\n");
    } else if(relation > 0){
        printf("The first number (%d) is greater than the second one(%d).\n", num1, num2);
    } else {
        printf("The first number (%d) is smaller than the second one (%d).\n", num1, num2);
    }
    
    return 0;
}
