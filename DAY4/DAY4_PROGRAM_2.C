//2) SWAPPING OF TWO NUMBERS WITHOUT USING THIRD VARIABLE


#include <stdio.h>
int main()
{
	int x=50,y=60;
	printf("before swapping := %d %d ",x,y);
	x=x+y;                                        //x=50+60=110  swap logic without using third variable    
	y=x-y;                                        //y=110-60=50
	x=x-y;                                        //x=110-50=60
	printf("\n after swapping:= %d %d",x,y);      // x=60 y=50     after swap
	return 0;

}
