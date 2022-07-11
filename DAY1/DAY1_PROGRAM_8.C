//8) Consider the weights of three people as user input. Find the heaviest among them and print it.

#include <stdio.h>
int main()                
{
   int a,b,c;
   printf("enter the weight of a b c\n");    
   scanf("%d %d %d",&a,&b,&c);                                                          // 3 input from user
   a>b&&a>c?printf("a is large"):b>c&&b>a?printf("b is larger"):printf("c is greater"); //finding largest among three
   
   return 0;
}
