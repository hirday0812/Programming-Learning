#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    if (n >= 1)
        printf("%d ", a);  // Print first term
    if (n >= 2)
        printf("%d ", b);  // Print second term

    for (i = 3; i <= n; i++) {
        c = a + b;        // Next term is sum of previous two
        printf("%d ", c);
        a = b;            // Update a
        b = c;            // Update b
    }

    printf("\n");
    printf("\n\t\t\t\t\t=====Code Executed Successfully=====\n");
    
    return 0;
}