
//1)Find the number of leap years in the interval 1990-2022.

#include<stdio.h>
int main()
{
	int startyear,endyear,i;
	printf("print leap year between two given years \n");
	printf("Enter start year: ");
	scanf("%d", &startyear);
	printf("Enter End year: ");
	scanf("%d", &endyear);
	printf("Leap year:\n");
	for(i=startyear; i <=endyear; i++)
	{
		if((0 == i % 4)&& (0!= i % 100)||(0==i % 400))   //if enter year is divided by 4 and 400 but not divided by 100
		{
			printf("%d\n",i);                        //print leap year
		}
	}
	return 0;
}
