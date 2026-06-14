#include<stdio.h>
int main(){

    int a,b;
    printf("Enter the numbers seperated by space : ");
    scanf("%d %d",&a,&b);

    if(a==b)

        printf("The numbers %d and %d are equal",a,b);
    

    else

        printf("The numbers %d and %d are not equal",a,b);
    

    printf("\n\t\t\t\t\t*****Code Executed Successfully*****");

    return 0;
}