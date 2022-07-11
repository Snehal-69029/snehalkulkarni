/*(G)ASSIGNMENT OPERATOR
1) SWAPPING OF TWO NUMBERS WITH USING THIRD VARIABLE*/

#include <stdio.h>
int main()
{
	int x,y,temp;
	//printf("enter the value of a and b");    
	scanf("%d %d",&x,&y);
	temp=x;                                        //'x' data store in 'temp' variable
	x=y;                                           // 'y' data store in 'x' varible
	y=temp;                                        // 'temp' data store in 'y' variable
	printf("\n after swapping %d %d",x,y);   
	return 0;
}
