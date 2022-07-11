/*I). Set the register SSPSTAT value such a way that bit CKE, P and S bit are cleared (0), 
without disturbing the other bits.
II).Find out the value of UA, BF, SMP bits in SSPSTAT register if the value of the register is 0x55

Algoritms- step 1:Set the register SSPSTAT value such way that CKE and P S bit is cleared 
           step 2:assigned hexadecimal value to one variable num1
           step 3:assign 0x55 hexadecimal value to another variable num2 for getting value of UA, BF, SMP bits in SSPSTAT register
           step 4:left shitf bit position by 1 and do compliment and anding operation with num1 and print that value num1&=~((1<<3)|(1<<4)|(1<<6))
           step 5:right shift num2[(num2>>7)&1,(num2>>1)&1,(num2>>0)&1]value with bit position and anding with 1 and finally print that all hexadecimal value */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1=0x1c;                       //assigned hexadecimal value to one variable num1
	int num2=0x55;
	num1&=~((1<<3)|(1<<4)|(1<<6));       // left shitf bit position by 1 and do compliment and anding operation
	printf("%x\n",num1);
	printf("%x %x %x",(num2>>7)&1,(num2>>1)&1,(num2>>0)&1);  //print value in hex

}
