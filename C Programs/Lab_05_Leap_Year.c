#include<stdio.h>
int main(){
    int year;

    printf("Enter the year you want to check : ");
    scanf("%d",&year);

    /* A year is a leap year when conditions:

            If its a century i.e. multiple of 100 like 1900 or 2000

                    Then it must be divided by 400, as :

                            1900 % 400 is not 0 hence not a leap year

                            But 2000 is a leap year as 2000 % 4 is 0

            If its not a century as 2020, 2025

                    Then it must be divided by 4 as  :

                            2020 % 4 is 0 hence leap year

                            2025 % 4 is not 0 hence not a leap year
    */

    if(year%100 == 0){

        if(year%400 == 0){

            printf("%d is a leap year",year);

            }


        else{

            printf("%d is not a leap year",year);

        }

        }
    else{

        if(year%4 == 0){

            printf("%d is a leap year",year);

        }

        else{

            printf("%d is not a leap year",year);

        }


    }

    printf("\n\t\t\t\t\t*****Code Executed Successfully*****");
    return 0;
}