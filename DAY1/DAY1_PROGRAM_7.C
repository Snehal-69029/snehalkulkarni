//7) Implement basic logic gates using C (AND, OR, NOT). Consider the inputs:

(and & or gate)

#include <stdio.h>
int main()                
{
   int a,b,y,y1,y2;
   printf("enter the value of a =");   // take user input
   scanf("%d",&a);
   printf("enter the value of b =");
   scanf("%d",&b);
   y=a&&b;                            // bitwise AND
   y1=a||b;                           // bitwise OR
   y2=!a;                             //bitwise NOT
 
   printf("output of gate = %d %d %d",y,y1,y2);
   return 0;
}
