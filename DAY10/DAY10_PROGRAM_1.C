/*3). Write a program to Implement ”Selection Sort” using Recursion for given elements 
(Number elements will vary, so make it as configurable item)
Algorithams-
step 1:assign variable for array and take input from user
step 2:Initialize minimum value(min_idx) to location 0
step 3:Traverse or search the array to find the minimum element in the array
step 4:While traversing if any element smaller than min_idx is found then swap both the values.
step 5:Then increment min_idx to point to next element
step 6:Repeat until array is sorted        */


#include <stdio.h>
void selection(int [],int,int,int,int);

int main()
{
    int list[5],size,temp,i,j;

    //printf("Enter the size of the list: ");              //assign variable for array and take input from user
    scanf("%d",&size);
    //printf("Enter the elements in list:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&list[i]);                                
    }
    selection(list,0,0,size,1);
    //printf("The sorted list in ascending order is\n");
    for(i=0;i<size;i++)
    {
        printf("%d  ",list[i]);                            //Traverse or search the array 
    }

    return 0;
}

void selection(int list[],int i,int j,int size,int flag)
{
    int temp;

    if (i<size-1)
    {
        if(flag)
        {
            j=i+1;
        }
        if(j<size)                                       //check value is less than size
        {
            if(list[i]>list[j])
            {
                temp=list[i];
                list[i]=list[j];                          // swap logic
                list[j]=temp;
            }
            selection(list,i,j+1,size,0);
        }
        selection(list,i+1,0,size,1);
    }
}
