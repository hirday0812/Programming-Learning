#include <stdio.h>
int main() {

    int i, n, m = 1;

    printf("Enter the number :  ");
    scanf("%d" , &n);

    for(i = 1 ; i <= n ; i++){

        m = m * i;

    }

    printf("The Factorial %d! is equal to :  %d", n, m);

    printf("\n\n\t\t\t\t\t=====Code Executed Successfully=====");

    return 0;
    
}