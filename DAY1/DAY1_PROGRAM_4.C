/*4)Take a 6-digit number as input from the user and reverse the number. 
Make sure that the number does not include a ‘0’ in any of its digits.*/

#include <stdio.h>
int main()
{
    int n,r,rev=0;
    printf("enter the 6 digit number\n");  
    scanf("%d",&n);
    while(n!=0)                            // number not equal to 0 
    {
    r=n%10;                                //calculate modulues on user enter data it return remainder
    rev=rev*10+r;                          //store number in reverse form
    n=n/10;                                // divide number by 10 
    }

    printf("reverse number is=%d",rev);    //print reverse number
   

     return 0;
}
