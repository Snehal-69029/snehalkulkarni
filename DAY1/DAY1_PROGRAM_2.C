//2) Consider a character input from a user and print if it is a vowel or consonant. 

#include <stdio.h>

int main()
{
    char ch;  
    printf("enter the chara : \n");                                                               //enter chara from user
    scanf("%c",&ch);         
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')  //check enter chara is vowel or consonant
    printf("%c is vowel",ch);
    else
     printf("%c is consonant",ch);

    return 0;
}
