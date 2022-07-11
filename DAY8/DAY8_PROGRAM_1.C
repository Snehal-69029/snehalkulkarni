/*2)Write a program in C to sort an array using Pointer. The sample output must be as below

Algorithms- 
    step 1: initialize the array with size of 5 
    step 2: then access the array element by pointer variable ptr
    step 3: first compaire data is grater or less if *(ptr + j) < *(ptr + i) then swap the value using temp variable    
    step 4: print the sorted array in ascending order.*/


#include <stdio.h>
// Function to sort the numbers using pointers
void sort(int n, int* ptr)
{
 int i,j,t;
// Sort the numbers using pointers variable
for (i = 0; i < n; i++)
{
         for (j = i + 1; j < n; j++)                  //access the array element by pointer variable ptr
             {
               if (*(ptr + j) < *(ptr + i))           //first compaire data is grater or less 
               {
                  t = *(ptr + i);
                  *(ptr + i) = *(ptr + j);
                  *(ptr + j) = t;
               }
             }
}

// print the numbers
for (i = 0; i < n; i++)
printf("%d ", *(ptr + i));                          //print the sorted array in ascending order.
}

// Driver code
int main()
{
int n = 5;
int arr[] = { 25, 45, 89, 15, 82 };          //initialize the array with size of 5 
sort(n, arr);
return 0;

}
