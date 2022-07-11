//5) Find whether a given 10-digit number is palindrome or not.
 
#include <stdio.h>

int main()
{
    long int n=123344545,r,rev=0,b=n;   //assign 10 digit value 
    while(n>0)                          // num greater than 0
    {
    r=n%10;
    rev=rev*10+r;                      //reverse num calculation
    n=n/10;
    }
    if(rev==b)                         //check assign number and revrese number is equal or not
     printf("palindrom number ");      //print num is palindrom
   else
     printf(" not palinrome number");

     return 0;
 }
