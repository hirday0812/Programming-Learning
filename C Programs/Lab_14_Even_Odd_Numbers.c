#include<stdio.h>
int main(){

    int n,esum=0,osum=0;

    printf("Enter the last number :  ");
    scanf("%d",&n);


    for(int i = 1 ; i <= n ; i++){

        if(i % 2 == 0){

            esum = esum + i;
        }

        else{

            osum = osum + i;

        }
    }
    printf("The sum of odd numbers is : %d",osum);
    printf("\nThe sum of even numbers is : %d",esum);

    printf("\n\t\t\t\t\t*****Code Executed Successfully*****");
    
    return 0;
}