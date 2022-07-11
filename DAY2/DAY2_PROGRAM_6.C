//6)A message is encoded in the form of numbers and sent to you. Write a program to decode the message. (HINT: A=1, B=2, … so on) 

#include <stdio.h>


int main()
{
	char n;
	scanf("%c",&n);                      //chara ascii value for encode msg        
	int l=n%64;                         // logic for decode msg
	printf("%d\n",l);                   //print msg
}
