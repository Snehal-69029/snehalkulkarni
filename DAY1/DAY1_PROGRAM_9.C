/*9)5 balls are numbered with random 1-digit number each. Assign these numbers using user input. 
Print whether each ball is assigned odd or even number.*/

#include <stdio.h>
int main()                
{
   int i,num;
   for(i=0;i<5;i++)          
   {
   printf("\n enter the number: "); 
   scanf("%d",&num);
   if(num%2==0)                // check num divided by 2 or not 
   printf("even number");     // if yes then even
   else
   printf("odd number");     //if no then odd
   }

   return 0;
}
