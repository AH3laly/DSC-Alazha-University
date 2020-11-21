/**
 * DSC Assessment 1 - Course 1 - Session 2.1
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com> <github.com/AH3laly>
 */

// Question 5:
// Write a program to print the ASCII value of a character input by the user.

#include <stdio.h>
#include <stdbool.h>

int main(){

    char input;
    int charAsci;
    // Prompt the user to enter a Character
    printf("Enter Any Character: ");
    scanf("%c", &input);

    charAsci = (int)input;
    bool isValid = false;

    if(charAsci >= 97 && charAsci <= 122){
        isValid = true;
    } else if(charAsci >= 65 && charAsci <= 90){
        isValid = true;
    }

    if(isValid){
        printf("The ASCI code of %c is: %d\n", input, charAsci);
    } else {
        printf("Invalid Entry: Only characters a-z and A-Z allowed.\n", input, charAsci);
    }
    return 0;
}
