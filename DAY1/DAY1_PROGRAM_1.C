/*1) We'll say a number is special if it is a multiple of 11 or if it is one more than a multiple of 11. 
Print “SPECIAL” if the given non-negative number is special. Use the % "mod" operator.*/

#include <stdio.h>

int main()
{
    
    int n;
    printf("enter the number\n");
    scanf("%d",&n);                   // take user input
    if(n%11==0)                       //check number is multiple of 7 or not
    printf("special");
    else
    printf("not special");
    return 0;
}
