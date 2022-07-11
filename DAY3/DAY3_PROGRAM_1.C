/*1.Write a program to achieve below statements.

  a.Collect 15 elements (8 integers, 7 float) as i/p from user. 

  b.Calculate and Print the sum, average and mean of integers

  c.Calculate and Print the sum, average of all float values

  d.Divide sum in statement ‘b’ with statement ‘c’ sum and print the value.

  e.Divide average in statement ‘b’ with statement ‘c’ average and print the value.

  f.Convert all 7 float values to integers and print them.*/

#include <stdio.h>
int main()
{
    int a[8],i,sum=0,avg,s;
    float b[7],sum1=0,avg1;
    float s1;
    for(i=0;i<8;i++)
    {
        scanf("%d",&a[i]);                        // take input from user
        sum=sum+a[i];              
        avg=sum/8;                                //avg calculation
    }
    printf("integers sum %d and avg %d\n",sum,avg);
    for(i=0;i<7;i++)
    {
        scanf("%f",&b[i]);                        //Convert all 7 float values to integers and print them.
        sum1=sum1+b              
        avg1=sum/7;
    }
    printf("float sum %f and avg %f\n",sum1,avg1);
    s=sum/sum1;
    s1=avg/avg1;                                     
    printf("div sum int and float %d\n",s);
    printf("div avg int and float %d\n",s1);
}
