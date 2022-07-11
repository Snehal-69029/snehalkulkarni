//4) GIVEN NUMBER IS POWER OF 2 OR NOT

#include <stdio.h>
int main()
{
	int n;
	printf("enter the number\n");               //suppose num is 4(0100)
	scanf("%d",&n); 
	if((n&(n-1))==0)                            // 4-1=3(0011)  then 0100 & 0011==0000  power of 2 logic        
		printf("the bit is pow of 2\n");    //then even
	else
		printf("the bit is not pow of 2\n");


	return 0;
}
