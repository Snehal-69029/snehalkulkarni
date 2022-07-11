/*3)Set the register T0CON value such a way that bit TMR0ON and PSA bit are set (1),
without disturbing the other bits.

Algorithms-
        step 1:assign hexadecimal value to variable
        step 2:take bit position 3 and 7 according to register set TMR0ON ,PSA 
        step 3:then shift bit position 3 an 7 and do OR operation 
        step 4:print the final value.*/

#include<stdio.h>
int main()
{

int a=0xfa;                    //assign hexadecimal value to variable
int bp=3;
int bp1=7;
a=a|(1<<bp)|(1<<bp1);         //logic for set bit
printf("%x",a);

}
