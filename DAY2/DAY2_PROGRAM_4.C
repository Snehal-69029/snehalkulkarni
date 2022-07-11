//4)Sum of digits
//Consider the phone number of a person as user input and find the sum of its digits.

#include<stdio.h>
int main()
{
	long int n,sum=0;
	printf("Enter the phone number:");
	scanf("%ld",&n);                         //long int for 10 digit number
	while(n>0)
	{
	//m=number%10;                   
	sum=sum+n%10;                            //sum of digit       
	n=n/10;
	}
	printf("%ld",sum); 
}
