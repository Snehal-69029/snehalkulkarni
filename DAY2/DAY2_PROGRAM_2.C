//2)It was Raj's first day at school. His teacher asked the students to meet every other student in the class and to introduce themselves. 
//The teacher asked them to give handshakes when they meet each other. 
//If there are ‘n’ number of students in the class then find the total number of handshakes made by the students.

#include<stdio.h>
int main()
{
	int n,total;
	printf("Enter the number of students");
	fflush(stdout);
	scanf("%d",&n);                 
	total=n*(n-1)/2;                                //handshake logic  N-1  N-2  N-3  ((N-1)*N)/2
	printf("total students %d",total);
	return 0;
}
