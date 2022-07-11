/*2)Write program to set (1) bits CIS, C2OUT, C1OUT in 
register “CMCON” if bits CHS3, CHS2, CHS1 bits are set to 0x06 
in register “ADCON0”

Algorithms- step 1: set (1) bits CIS, C2OUT, C1OUT in register CMCON if bits CHS3, CHS2, CHS1 bits are set to 0x06 
            step 2: assign hexadecimal value to num and num1 variable.
            step 3: then right shift operation with num value by num>>2
            step 4: comparing the value num==0x06 if equal then do left shift operation with bit position by 1
            step 5: print that compared value in hexadecimal form  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num=0x1a;         
	int num1=0x23;                     // right shift operation with num value
	num=num>>2;          
	if(num==0x06)
	{
	num1|=((1<<7)|(1<<6)|(1<<3));       // if equal then do left shift operation with bit position by 1
	printf("%x\n",num1);
	}


}
