#include <stdio.h>  // Include standard input-output library

int main() {
    // Declare variables
    int a, b, temp;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    // Display numbers before swapping
    printf("\nThe numbers before swapping are: %d and %d\n", a, b);

    // Swap logic using a temporary variable
    temp = a;  // Store value of a in temp
    a = b;     // Assign value of b to a
    b = temp;  // Assign value of temp (original a) to b

    // Display numbers after swapping
    printf("The numbers after swapping are: %d and %d\n", a, b);

    // Final success message
    printf("\n\t\t\t===== Code Executed Successfully =====\n");

    return 0;  // End of program
}
