#include<stdio.h>
#define _USE_MATH_DEFINES  //Used to use M_PI in math.h
#include<math.h>

int main(){

    float radius,area;

    printf("Enter the radius of the circle : ");
    scanf("%f",&radius);

    area=M_PI*pow(radius,2);

    printf("The area of the circle (in float form) is %.6f\n",area); //% .6f gives the float in 6th decimal place
    printf("The area of the circle (in exponential form) is %.6e\n",area); //% .6e gives exponential after 6 digits

    printf("\n\t\t\t\t\t*****Code Executed Successfully*****");
    return 0;

}