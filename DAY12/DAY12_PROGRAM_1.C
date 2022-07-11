/*Find common elements in three sorted arrays, 3 array values are given as input to program.
ALGORITHM:- step 1:Initialize three arrays as array1,array2,array3. 
            step 2:sizeof array/2 for 3 arrays 2.let us assume array1 is i,array2 is j,array3 is k. 
            step 3:if i < j then increment i. 
            step 4:if j < k then increment j. 
            step 5:if i=j=k,then print that equal value otherwise it will check next index. 
            step 6:if found one value then again checked till reach end to find the another common value if the value found it will print otherwise it print already founded value. 
            step 7:if common values are found it prints that values otherwise it will print no common values found. */

#include <stdio.h>

                                                                             //  prints common elements in ar1
void findCommon(int ar1[],int ar2[],int ar3[],int n1,int n2, int n3)
{
                                                                              // Initialize starting indexes 
                                         
int i=0,j=0,k=0;

                                                                                // Iterate through three arrays 
                                                                                    
while (i<n1&&j<n2&&k<n3)
{
                                                                                
if (ar1[i]==ar2[j]&&ar2[j]==ar3[k])              //check condition
{
printf("%d ",ar1[i]);
i++;
j++;
k++;
}
                                                                                    
else if(ar1[i]<ar2[j])                      // i < j then increment i.
i++;
                                                                                     
else if (ar2[j]<ar3[k])                    //j < k then increment j. 
j++;
                                                                                    
else
k++;
}
}
// Driver code
int main()
{
    int ar1[] = {1,5,10,20,40,80};
    int ar2[] = {6,7,20,80,100};
    int ar3[] = {3,4,15,20,30,70,80,120};
    int n1=sizeof(ar1)/sizeof(ar1[0]);
    int n2=sizeof(ar2)/sizeof(ar2[0]);
    int n3=sizeof(ar3)/sizeof(ar3[0]);
    printf("Common Elements are ");
    findCommon(ar1,ar2,ar3,n1,n2,n3);
    return 0;
}
