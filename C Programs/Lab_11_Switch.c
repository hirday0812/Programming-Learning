#include<stdio.h>
int main(){
    char operation;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operation);
    switch(operation){
        case '+': {
            int a, b;
            printf("Enter two numbers to add: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n", a + b);
            break;
        }
        case '-': {
            int a, b;
            printf("Enter two numbers to subtract: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n", a - b);
            break;
        }
        case '*': {
            int a, b;
            printf("Enter two numbers to multiply: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n", a * b);
            break;
        }
        case '/': {
            int a, b;
            printf("Enter two numbers to divide: ");
            scanf("%d %d", &a, &b);
            if(b != 0){
                printf("Result: %.2f\n", (float)a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        }
        default:
            printf("Error: Invalid operator.\n");
    }
    printf("\n\t\t\t\t\t=====Code Executed Successfully=====");
    return 0;
}