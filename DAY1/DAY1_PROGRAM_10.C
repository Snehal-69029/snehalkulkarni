/*10)Students with roll numbers 1-9 are seated in ascending order in an examination hall. 
There has been a slight mistake in their seating arrangement where two consecutive roll numbers have been swapped. 
Choose these two consecutive numbers as per your choice and swap them back in their right places according to ascending order.*/

#include <stdio.h>
int main()
{
int x,y,c,d,e,f,g,h,i;
printf("enter the 9 digit\n");
scanf("%d %d %d %d %d %d %d %d %d",&x,&y,&c,&d,&e,&f,&g,&h,&i);  //enter number 1 to 9
printf("after swapping\n");
   x=x+y;                                                       // swapping logic without using third variable
   y=x-y;                  
   x=x-y;                   
printf("%d %d %d %d %d %d %d %d %d",x,y,c,d,e,f,g,h,i);       // after swap value
return 0;  
}
