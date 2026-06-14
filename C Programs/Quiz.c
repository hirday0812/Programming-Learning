#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s[100];    // Creating a string with 99 characters(one \0)
    scanf("%[^\n]%*c", s);
      //[^\n] reads the characters upto \n
    
    printf("Hello, World!\n");
    printf("%s", s);
    
    return 0;
}
