/*1)Write a function to store "G_Eng_EngineTemperature_uchar" 
and "G_Eng_EngineRpm_uint" into " G_Msg_EngineInformation_Byte[5u]" as shown below.
unsigned char G_Eng_EngineTemperature_uchar = 50u ;
unsigned int G_Eng_EngineRpm_uint = 1000u;
unsigned char G_Msg_EngineInformation_Byte[5u];

Algorithms- step 1:initialize the 4 register and Temperature_uchar =50u ,EngineRpm_uint =1000u,EngineInformation_Byte[5]
            step 2:first reg 0,1,2,3,4 do Temperature_uchar&(0x00) operatiuon and shifting operator n=(rq1>>i)&1 then print that value
            step 3:again perform reg 0,1,2,3,4 EngineRpm_uint|(0x00) operatiuon and shifting operator (rq1>>i)&1 then print that value
            step 4:print all value in binary form */

#include <stdio.h>

int main()
{
int rq0,rq1,rq2,rq3,rq4;                            //initialize the register
int Temperature_uchar =50u ;
int EngineRpm_uint =1000u;
int EngineInformation_Byte[5];
rq0= Temperature_uchar&(0x00);
for(int i=7;i>=0;i--){                               
int n=(rq0>>i)&1;                                   //set the bit logic by shift & anding operator for reg Temperature_uchar
printf("%x ",n);                                       
}
printf("\n");
rq1=Temperature_uchar&(0x00);                       
for(int i=7;i>=0;i--){
int n=(rq1>>i)&1;
printf("%x ",n);
}
printf("\n");
rq2=Temperature_uchar&(0x00);                    
for(int i=7;i>=0;i--){
int n=(rq2>>i)&1;
printf("%x ",n);
}
printf("\n");
rq4=Temperature_uchar&(0x00);                  
for(int i=7;i>=0;i--){
int n=(rq4>>i)&1;
printf("%x ",n);
}
printf("\n");
rq3=Temperature_uchar|(0x00);                    
printf("rq3 value:");
for(int i=7;i>=0;i--){
int n=(rq3>>i)&1;
printf("%x ",n);
}
printf("\n");
rq0=EngineRpm_uint|(0x00);                              //set the bit logic by shift & anding operator for reg EngineRpm_uint
printf("EngineRpm_uint rq0 value:");
for(int i=4;i>=0;i--){
printf("%x ",(rq0>>i)&1);
}
printf("\n");
rq1=EngineRpm_uint|(0x00);                             
printf("EngineRpm_uint rq1 value:");
for(int i=7;i>=0;i--){
printf("%x ",(rq1>>i)&1);
}
printf("\n");
rq2=EngineRpm_uint|(0x00);
printf("EngineRpm_uint rq2 value:");
printf("%x ",(rq2>>7)&1);
printf("\n");
rq3=EngineRpm_uint&(0x00);
printf("EngineRpm_uint rq3 value:");
for(int i=7;i>=0;i--){
printf("%x ",(rq3>>i)&1);
}
printf("\n");
rq4=EngineRpm_uint&(0x00);
printf("EngineRpm_uint rq4 value:");
for(int i=7;i>=0;i--){
printf("%x ",(rq4>>i)&1);
}
}
