//3.Write a program to reverse a 3-digit number which is entered from keyboard. 

#include <stdio.h>
int main()
{
int num,temp=0;
//printf("eneter the num\n");               
scanf("%d",&num);                      //user input
if(num<=999){ 
while(num>0)
{
    temp=temp*10+num%10;               //logic for reverse 3 digit number
    num=num/10;
}
}
printf("reverse the num\n %d",temp);
}
