//(I) BITWISE OPERATOR

//1)HOW TO SET A BIT

#include <stdio.h>
int main()
{
	int n,n1,set;
	printf("enter the number\n");
	scanf("%d",&n);                                //take num from user
        printf("enter the bit to set\n");          
	scanf("%d",&n1);                               //which bit is set in given num from user
	set=(1 << n1)|n;                               //set bit logic
	printf("before set the bit = %d  %d",n1,n);
	printf("\n after set the bit = %d  %d",n1,set);
	return 0;
}
