/*1.Realize a function which has 2 arguments and 1 return value. Argument 1 is Byte value, Argument 2 is bit position. 
Function has to flip the bit position (as per argument 2) in argument 1 byte value and return complete byte value 

Algorithms-
    step 1: assign byte value to one variable and assign bit position value to another variable
    step 2: Then flip the bit position by shifting operator and xor operator
    step 3: store the result in one variable and print that changed value*/

#include<stdio.h>
#include<stdlib.h>
int flip_bits(int a, int bp)
{
int result;
int mask = (1<<bp);                          //shifting bit
a = a^mask;                                  //xor operation
result = a;
return result;
}
int main()
{
         int i, j;
         printf("Enter value of i:\n");        //user input
         scanf("%x",&i);
         printf("Enter value of j:\n");
         scanf("%x",&j);
         int res = flip_bits(i,j);            //filp function
         printf("%x", res);
}
