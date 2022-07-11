/*Write a program to do binary search in a sorted array. 
Program should take input of sorted values and search value. (Make number of elements as configurable value)
How binary search works is explained below.
ALGORITHM:- 
 step 1:initialize array with the sorted data and calculate size of array. 
 step 2:enter value for search which is take from user. 
 step 3:middle value is is equal to addition of low index and high index and divide by 2. 
 step 4:after getting the mid value check whether the input(search value) is equal to the mid value. (if true return mid index otherwise jump to next cond). 
 step 5:if mid value of index is less than input it prints the mid value + 1 otherwise mid value - 1. 
 step 6:if cond is false Repeatedly check from the second point until the value is found.

*/



#include<stdio.h>
int binarySearch(int array[], int x, int low, int high)
{
	                                                 // Repeat until the pointers low and high meet each other 
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(array[mid]==x)                      // compare middle value
		return mid;
		if(array[mid]<x)            
		low=mid+1;                            // increase index or mid 
		else
		high=mid-1;
	}
	return 0;
}
int main(void)
{
	int array[]={2,5,8,12,16,23,38,56,72,91};                       //initialize array with the sorted data 
        int n=sizeof(array)/sizeof(array[0]);                           //find size of array
	int x;
	scanf("%d",&x);
	int result=binarySearch(array,x,0,n-1);                         //find middle value
	//scanf("%d",&x);
	if(result==0)
	printf("Not found");
	else
	printf("Element is found at index %d", result);
	return 0;
}


