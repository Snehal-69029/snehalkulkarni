//8.Write program to check given i/p by user is alphabet or not alphabet using conditional operator

#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);                                                                               //take user input chara                 
    ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))?printf("is alphabet"):printf("is not an alphabet");  // logic to check alphabet or not
}
