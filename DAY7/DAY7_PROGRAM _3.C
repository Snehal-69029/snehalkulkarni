/*3)Write program to clear(0)
 bits CIS, CM2, CM1, CM0 in register “CMCON” if bits CHS3, CHS2, CHS1, CHS0 bits are set to 0x07 in register “ADCON0”

algorithams-
step 1: assing variable for two 8 bit register num1 num2  
step 2: enter value in one register and do anding operation with 28 binary value because in that cis cm2 cm1 cmo set to 00011100(0x07) 
        if this result value equal to 28 then second register 4 bit chs3 chs2 chs1 chs0 make clear by anding operation with 0xF0 
step 3: if num1 value is not equal then print not equal*/


#include <stdio.h>

int main()
{
  int num1,num2;
  printf("enter the values");
  fflush(stdout);
  scanf("%d%d",&num1,&num2);      // enter user input
  if((28 & num1) == 28)           //logic for set bit
  {
      num2=num2&0xF0;
      printf("%d",num2);         //print value
  }
  else
  printf(" not equal nothing");   

}
