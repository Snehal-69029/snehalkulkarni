/*2)Write a code to swap even bits with odd bits in unsigned long variable(uint64).

Algorithms-
step 1: assign the input number to variable x
step 2: do bitwise operation x with 0xAAAAAAAA so we get all even bit, The number 0xAAAAAAAA is for 32 bit number with all even bits set as 1 and all odd bits as 0. 
step 3: do bitwise operation x with 0x55555555so we get all odd bit , The number 0x55555555 is for 32 bit number with all odd bits set as 1 and all even bits as 0. 
step 4: Right shift all even bits. 
step 5: Left shift all odd bits. 
step 6: Use logiacal OR opeartion to add both even and odd bits and return. */
 


#include <stdio.h>
unsigned int swapBits(unsigned int x)        
{
unsigned int even_bits = x & 0xAAAAAAAA;          // bitwise operation x with 0xAAAAAAAA so we get all even bit
unsigned int odd_bits = x & 0x55555555;           //bitwise operation x with 0x55555555so we get all odd bit
even_bits >>= 1;
odd_bits <<= 1;
return (even_bits | odd_bits);
}
int main()
{
    unsigned int x = 64;                    
    printf("%u ", swapBits(x));               //print value        
        return 0;
}
