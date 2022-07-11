/* 2)Write a function to store "G_Str_SteeringAngle_sint" 
to "G_Msg_SteeringInformation_Byte" as shown below.
signed int G_Str_SteeringAngle_sint = -60;
unsigned char G_Msg_SteeringInformation_Byte[3u];"

Algorithms- step 1: initialize 3 register
            step 2: initialize signed int G_Str_SteeringAngle_sint = -60 and array of unsigned char SteeringInformation_Byte[3u];
            step 3: then do OR operation with(0x00),shifting operator with bit position and anding with 1 [(reg0>>7)&1,(reg0>>6)&1]and print that hex value
                    we get changed value in the hex form  */



#include<stdio.h>
int main()
{
    int reg0,reg1,reg2;                                         //initializtion
    signed SteeringAngle_sint = -60;
unsigned char SteeringInformation_Byte[3u];

reg0= SteeringAngle_sint|(0x00);                                
printf("SteeringAngle_sint reg0:");
printf("%x %x ",((reg0>>7)&1),(reg0>>6)&1);                  //right shitf bit position 
printf("\n");

reg1=SteeringAngle_sint|(0x00);
printf("SteeringAngle_sint reg1:");
for(int i=7;i>=0;i--)                             
{
    printf("%x ",(reg1>>i)&1);                              //print value in hex if condition satisfied             
}
    reg2= SteeringAngle_sint|(0x00);
    printf("\n");
printf("SteeringAngle_sint reg0:");
printf("%x %x ",((reg0>>1)&1),(reg0>>2)&1);
printf("\n");
}
