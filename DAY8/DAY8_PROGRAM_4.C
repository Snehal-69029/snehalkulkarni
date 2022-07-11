/*II). Find out the value of T0PS2, T0PS1, T0PS0 bits in T0CON register if the value of the register is 0xF3

Algorithms-
step 1:Give the input some hex value as n to know the value of T0PS2, T0PS1, T0PS0 bits(position 0,1,2).
step 2:Use for loop for checking the values of first 3 bits.
step 3:That hex value is right shifted with 2,1 and 0 because last 3 bits are starting from 0 to 2,After right shifting result will be ANDed with 1.
step 4:That result can be stored in variable as x,Then print the x value. */

#include <stdio.h>
int main()
{
int n=0xf3,x,i;
for(i=2;i>=0;i--)
{
x=(n>>i)&1;           //hex value is right shifted
printf("%x",x);        //print value
}

}
