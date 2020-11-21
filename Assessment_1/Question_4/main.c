/**
 * DSC Assessment 1 - Course 1 - Session 2.1
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com> <github.com/AH3laly>
 */

// Question 4:
// Write a program that reads the radius of a circle and
// calculates the area and circumference then prints the
// results.

#include <stdio.h>

#define PI 3.14159

int main(){

    float radius, area, circumference;

    // Prompt the user to enter Circule radius
    printf("Enter the circle radius: ");
    scanf("%f", &radius);

    // Calculate the Area
    area = PI*radius*radius;

    // Calculate The Circumference
    circumference = 2 * PI * radius;

    // Print Results
    printf("Circle Area: %.2f\n", area);
    printf("Circle Circumference: %.2f\n", circumference);

    return 0;
}
