#include <stdio.h>
int main() {

    int n;

    printf("Enter the number : ");
    scanf("%d",&n);

    if(n%2==0){

        printf("\nThe number, %d is even\n\n",n);
        printf("\t\t\t\t\t----if block executed sucessfully----\n\n");
    }

    else{

        printf("The number, %d is odd\n\n",n);
        printf("\t\t\t\t\t----else block executed successfully----\n\n");

    }

    printf("\t\t\t\t\t=====Code Executed Successfully=====");

    return 0;
}