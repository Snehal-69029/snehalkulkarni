/*1)Write a program to convert a data stream from Little Endian to Big Endian (you can take any 8 bit value or use 0b110101110)?

Algoritham-
  step 1: assign hexadecimal value to variable 
  step 2: print the output in hex number
  step 3: decimal no to binary no convertion
  step 4: print the value  */

#include<stdio.h>
int main()
{
    int a=0x12;                     //assign hexadecimal value to variable  
    a=(a>>4&0x0f)|((a&0x0f)<<4);   //logic for endian
    printf("%x \n",a);            //  print the output in hex number

    for(int i=8;i>=0;i--)
    {
        int k=a>>i;               // decimal no to binary no convertion
    if(k&1)
    printf("1");
    else
    printf("0");

    }
}
