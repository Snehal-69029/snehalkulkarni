//2.Write a program to calculate the sum of the first and the second last digit of a 5-digit number entered from the keyboard.

#include <stdio.h>
int main()
{
    int a;
    printf("enter 5 digit number");
    fflush(stdout);
    scanf("%d",&a);
    int n,sum=0,b,c,temp=a;
    n=a%10;
    a=a/10;
    c=a%10;
    a=temp;
    while(a>0)
    {
        b=a;
        a=a/10;
        sum=b+c;
    }
    printf("%d",sum);
}
