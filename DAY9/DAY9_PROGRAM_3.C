
/*3)Assume that we have a car with 8 seats,and we are monitoring 8 seat belt status in a variable 
“G_Msg_switchstatus_Byte[]” as shown in pic1. Each switch status is combination of 2 bits as shown in pic2.
Write status of switches into variable “G_Msg_switchstatus_Byte[]” as below.
SWITCH1, SWITCH7 status is “faulty type 1 in switch”, SWITCH2, SWITCH5 status is ”switch unbuckle”, 
SWITCH3, SWITCH6 status is “switch buckle”, SWITCH4, SWITCH0 status is “faulty type 2 in switch” 
without disturbing the other bits.

Algoritms- step 1:initialize the 3  variable for three register in that our switch status is stored it is in hexadecimal
           step 2:initialize one variable which is take input from user means chose switch status option so use switch case
           step 3:each register switch is combination of two bit so in 1) fault 1 condition reg 0 and reg 2 bit position 0,1,4,5 set to 1 using leftshift operator
                  and reg 1 bit is clear using rightshift opretaor and anding with 1 similarly for 2) fault 2 condition reg 0 and reg 1 bit position 2,3,2,3 set to 1 using leftshift operator 
                  reg 2 is clear 3) buckle reg 1 and reg 2 bit 4,5,6,7 set to and reg 0 clear 4)unbuckle reg 1 bit 0,1,6,7 set to 1 and reg 0 is clear.
           step 4:print that value in binary form ex - fault 1 reg 0-0000 0011
                                                               reg 1-0000 0000
                                                               reg 2-0011 0000 */

  
                                                            
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,switch_status=0x00;
    int fault,f;
    int reg0,reg1,reg2,i,faulty_type;                   //initialization
    int faulty_type1=1,n,n1,n2;
    int reg1_unbuckle=2;
    int buckle=3;
    int faulty_type2=4;                   
    int num;
    printf("enter the fault\n");                        //user input
    fflush(stdout);
    scanf("%d",&num);
    switch(num)                                          // switch case
{
    case 1:
        reg0=switch_status|((1<<0)|(1<<1));
          reg1=switch_status&(0x00);                     // reg 0 and reg 2 bit position 0,1,4,5 set to 1 using leftshift operator
        reg2=switch_status|((1<<5)|(1<<4));
        for(i=7;i>=0;i--){
            n=(reg0>>i)&1;
            printf("%x",n);
        }
        n2=0x00;
        printf("\n");
               for(i=7;i>=0;i--){
                printf("%x",n2);
           }
           printf("\n");
        for(i=7;i>=0;i--){
               n1=(reg2>>i)&1;
               printf("%x",n1);
        }
               break;
        case 2:
        reg0=switch_status&(0x00);
        reg1=switch_status|((1<<7)|(1<<6)|(1<<0)|(1<<1));    //unbuckle reg 1 bit 0,1,6,7 set to 1 and reg 0 is clear.
        reg2=switch_status&(0x00);
        for(i=7;i>=0;i--){
            n1=(reg1>>i)&1;
            printf("%x",n1);
        }
        n2=0x00;
        printf("\n");
               for(i=7;i>=0;i--){
                   n2=(reg0>>i)&1;
                printf("%x",n2);
           }
           printf("\n");
        for(i=7;i>=0;i--){
               n=(reg2>>i)&1;
               printf("%x",n);
        }
               break;
        case 3:
        reg0=switch_status&(0x00);
        reg1=switch_status|((1<<4)|(1<<5));              //buckle reg 1 and reg 2 bit 4,5,6,7 set to and reg 0 clear
        reg2=switch_status|((1<<7)|(1<<6));
        for(i=7;i>=0;i--){
            n1=(reg1>>i)&1;
            printf("%x",n1);
        }
        printf("\n");
               for(i=7;i>=0;i--){
                   n2=(reg2>>i)&1;
                printf("%x",n2);
           }
           n2=0x00;
           printf("\n");
        for(i=7;i>=0;i--){
               n=(reg0>>i)&1;
               printf("%x",n);
        }
               break;
        case 4:
        reg0=switch_status|(1<<2)|(1<<3);                //fault 2 condition reg 0 and reg 1 bit position 2,3,2,3 set to 1 using leftshift operator
        reg1=switch_status|((1<<2)|(1<<3));
        reg2=switch_status&(0x00);
        for(i=7;i>=0;i--){
            n1=(reg1>>i)&1;
            printf("%x",n1);
        }
        n2=0x00;
        printf("\n");
               for(i=7;i>=0;i--){
                   n2=(reg2>>i)&1;
                printf("%x",n2);
           }
           printf("\n");
        for(i=7;i>=0;i--){
               n=(reg0>>i)&1;
               printf("%x",n);
        }
               break;

    }
}

