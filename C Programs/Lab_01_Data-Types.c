#include<stdio.h>
#include<limits.h> //used to find min and max constants of datatypes
void main(){
    printf("The range of signed int \n%d to %d\n", INT_MIN, INT_MAX);
    printf("The range of unsigned int \n0 to %u\n\n", UINT_MAX);

    printf("The range of signed char \n%d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("The range of unsigned char \n0 to %u\n\n", UCHAR_MAX);

    printf("The range of signed short \n%d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("The range of unsigned short \n0 to %u\n\n", USHRT_MAX);

    printf("The range of signed long \n%ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("The range of unsigned long \n0 to %lu\n\n", ULONG_MAX);

    printf("\n\n\t\t\t\t\t=====Code Executed Successfully=====");

}