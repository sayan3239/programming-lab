#include <stdio.h>
#include <math.h> // Required for floor() and ceil() functions

int main() {
    double num;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%lf", &num); // Read the number as a double to handle decimals

    // Calculate and print the floor value
    printf("Floor value of %.2f is %.2f\n", num, floor(num));

    // Calculate and print the ceiling value
    printf("Ceiling value of %.2f is %.2f\n", num, ceil(num));

    return 0; // Indicate successful execution
}