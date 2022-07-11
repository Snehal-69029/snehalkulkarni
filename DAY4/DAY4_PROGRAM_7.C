//2)HOW TO CLEAR A BIT

#include <stdio.h>
int main()
{
	int n,n1,clear;
	printf("enter the number\n");        
	scanf("%d",&n);
        printf("enter the bit to set\n");
	scanf("%d",&n1);
	clear=n&(~(1 << n1));                                //clear bit logic
	printf("before clear the bit = %d  %d",n1,n);
	printf("\n after clear the bit = %d  %d",n1,clear);
	return 0;
}
