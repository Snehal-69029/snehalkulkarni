/*3)Binary form
A message ID is required to send data via CAN communication between ECU’s. Accept a random 2-digit message ID from the user to send data. 
Keep in mind that the given ECU only accepts binary form of the message ID. Write a program to convert the 2-digit ID to binary form. */ 

#include<stdio.h>
int main()
{
	int n,r,binary=0;
	int temp=1;
	printf("Enter the number");
	fflush(stdout);
	scanf("%d",&n);
	while(n!=0)                
	{
	   r=n%2;                      //give remainder
	   n=n/2;                      //give quotient
	   binary=binary+r*temp;      // binary logic here temp is 1             
	   temp=temp*10; 
	}
	printf("binary number is %d",binary);
}

