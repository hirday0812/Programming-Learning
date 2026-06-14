#include <stdio.h>  // Include standard input-output library

int main() {
    // Declare variables
    int a, b, c, sum;
    float avg;

    // Input three numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    // Calculate sum
    sum = a + b + c;

    // Print sum
    printf("\nThe sum of the numbers %d, %d, %d is: %d\n", a, b, c, sum);

    // Calculate average
    avg = sum / 3.0;  // Use 3.0 to ensure floating-point division

    // Print average
    printf("The average of the numbers %d, %d, %d is: %.2f\n", a, b, c, avg);

    // Final message
    printf("\n\t\t\t===== Code Executed Successfully =====\n");

    return 0;  // End of program
}
