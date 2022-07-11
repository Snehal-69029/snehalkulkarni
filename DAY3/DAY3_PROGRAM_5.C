//5.Right shift the value 0xFE by 3 bits and print the value

#include <stdio.h>
int main()
{
    int n=0xFE;               //assign value in hex
    n=(n>>3);                 //right shift
    printf("%d",n);
}
