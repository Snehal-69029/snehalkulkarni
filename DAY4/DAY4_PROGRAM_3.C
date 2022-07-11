/*(H)CONDITIONAL OPERATOR  

1)BIGGEST OF TWO NUMBERS USING CONDITIONAL OPERATOR*/

#include <stdio.h>
int main()
{
	int x,y,biggest;
	//printf("enter the value of x and y");
        scanf("%d %d",&x,&y);
	(x>y)?(biggest=x):(biggest=y);                                // if x>y then big x otherwise big y
	printf("%d %d the biggest number is:%d\n",x,y,biggest);
	return 0;

}
