#include<stdio.h>
void main(){
    int a,b;

    printf("Enter the first number : ");
    scanf("%d",&a);

    printf("Enter the second number : ");
    scanf("%d",&b);

    printf("\nThe numbers before swapping are : %d and %d",a,b);

    //  Suppose 2 numbers as a=12 and b=13
    a=a+b; //  a will get 12+13=25, i.e. a=25
    b=a-b; //  b will get 25-13=12, i.e. b=12
    a=a-b; //  a will now get 25-12(new b is 12)=13, i.e. a=13

    printf("\nThe numbers after swapping are : %d and %d",a,b);

    printf("\n\n\t\t\t\t\t=====Code Executed Successfully=====");
}