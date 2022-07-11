/*Requirement 2:
	  Along with the “Requirement 1”, The Sensor_Values are considered as
	  malfunction/corrupted if data is either 0xFF, 0x00 continuously for 3 samples.
Output 1 : Print the time stamps where data is coming as malfunction/corrupted.
Output 2 : Delete the malfunction/corrupted data samples and write valid sensor values to new 2-dimension array 
	  “Sensor_Final_Vlaue[Timestamp_Value][ Sensor_Data]” and print them – timestamp and values.

Algorithm:-

step 1:Assign the 2D array as valid sensor values.
step 2:Read the sensor data using for loop.
step 3:Check the if condition (sensor data==0x00||0xff) continously for 3 times.If it true then print the corrupted data.
step 4:Take another if condition (sensor data!=0x00||0xff)check continously for 3 times.If it true then print the deleted corrupted data.*/



#include<stdio.h>
int main()
{
int i;
 int b[20][2]={{0,0x01},{10,0x06},{20,0x04},{30,0x00},{40,0x00},{50,0x00},
                {60,0xaa},{70,0x55},{80,0xfe}, {90,0xef},{100,0xee},{110,0x02},{120,0x05},       //Assign the 2D array as valid sensor values.
                {130,0xff},{140,0xff},{150,0xff},{160,0x11},{170,0x33},{180,0x99},{190,0xe9}};
    for(i=0;i<20;i++){                                
        printf("%d\t%x\n",b[i][0],b[i][1]);                                                     //Read the sensor data using for loop.
    }
    printf("\n");
    puts("Malfunction/corrupted data samples are.......");
    for(i=0;i<20;i++){                                                                     //Print the time stamps where data is coming as malfunction/corrupted.           
        if(b[i][1]==0x00 || b[i][1]==0xff){
            printf("%d\t",b[i][0]);
        }
    }
    puts("\n\nDeleted malfunction/corrupted data samples are.......");       //Delete corrupted data and write valid sensor values to new 2-dimension array 
    for(i=0;i<20;i++){
        if(b[i][1]!=0x00 && b[i][1]!=0xff){
            printf("%d\t%x\n",b[i][0],b[i][1]);
        }
    }
}
