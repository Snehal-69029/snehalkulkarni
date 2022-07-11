//7)Write a program to convert Celsius form of temperature into Fahrenheit and vice versa. 

#include <stdio.h>

int main()
{
               
	float f,c;
	scanf("%f",&c);                     
	f=(c*9/5)+32;                               // fahrenheit conversion                        
	c=(f-32)*5/9;                               //celsius conversion
	printf("convert celsius to farha %f\n",f);
	printf("convert fahrenheit to celsius  %f\n",c);

}
