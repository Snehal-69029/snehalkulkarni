/*2)Find empty strings in an array of strings (Array of strings will be given as input to program) and print the position of array where empty string is present. 
And replace the empty string array element as “CYIENT”

ALGORITHM:- 1.Initialize the strings with empty string. 
            2.then calculate the size of string and store in one variable. 
            3.use for loop to find the empty string. 
            4.when you found empty string that will be replaced with the given string "cyient". 
            5.print all the strings along with replaced string. */




#include <stdio.h>
int main()
{
    char *a[]={"apple"," ","grapes","pineapple","mango"};              //assign chrara array
    int size=sizeof a/sizeof(a[0]);                                     // find size of array
    int pos=0;
    printf("%d",size);
    int i;
    for(i=0;i<5;i++){        
        printf("\n");
        if(a[i]==" "){                                                 //found blank space
         a[i]="cyient";                                                //replace blank sapce with cyient
         pos=i;
    printf("%s",*(a+i));                      
        }
    }
     printf("pos=%d\n",pos);
    return 0;
}
