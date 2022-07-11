//4.Convert decimal number 204 to hex value, binary value and print the same

#include<stdio.h>
int main()
{
    int n=204,x=n;                    //assign value
    int r,h,b,i;
    while(n!=0)
    {
        r=n%16;                      
        n=n/16;
        if(r<=0||r<=9)              //check condition is satisfied or not     
            h=r+48;
        else
            h=r+55;
        printf("%c",h);
    }
    printf("\n");
    x==n;
    for(i=7;i>=0;i--){
        b=(x>>i)&1;
printf("%d",b);                    //print value
}
}
