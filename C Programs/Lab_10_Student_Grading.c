#include<stdio.h>
int main(){

    int phy,math,comms,cp,ds,sum;
    float perc;

    printf("Enter your marks in Physics  :  ");
    scanf("%d",&phy);

    printf("Enter your marks in Mathematics  :  ");
    scanf("%d",&math);

    printf("Enter your marks in Communications  :  ");
    scanf("%d",&comms);

    printf("Enter your marks in C Programming  :  ");
    scanf("%d",&cp);

    printf("Enter your marks in Data Science  :  ");
    scanf("%d",&ds);

    sum=phy+math+comms+cp+ds;

    perc=sum/5.0;

    printf("\nYour percentage is  :  %.2f",perc);

    if(perc<=100 && perc>90){

        printf("\nYour Grade is A");
    }

    else if(perc<=90 && perc>80){
        printf("\nYour Grade is B");
    }

    else if(perc<=80 && perc>60){

        printf("\nYour Grade is C");
    }

    else{

        printf("\nYour Grade is D");
    }

    printf("\n\n\t\t\t\t\t=====Code Execution Completed=====");

    return 0;


}