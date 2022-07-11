/*Requirement 1:-
  	  Acceleration sensor data is captured in a 2-dimension array as “Sensor_Values[Timestamp_Value][ Sensor_Data]”.
    	  Time stamp interval = 10 ms incremental
	  Number of data samples = 20 (20 time stamp samples, 20 data samples)
	  The Sensor_Data is considered as noise if values is < 0x05 and > 0xF0.
Output 1 : Print the time stamp where data is coming as noise.
Output 2 : Delete the noise data and write valid sensor values to new 2-dimension array “Sensor_noNoice_Vlaue[Timestamp_Value][ Sensor_Data]” and print them – timestamp and values.

Algorithm:-

step 1:Assign sensor data using 2D array.
step 2:Read the sensor data using for loop.
step 3:Check the if condition, if condition[<0x05 || >0xf0] is true print the sensor noise values.
step 4:Write another if condition for printing the sensor non voice values.If the condition[<0x05 && >0xf0] is true print the sensor non voice values.
step 5:Assign another 2D array for printing the sensor non voice values.*/

  

#include<stdio.h>
int main()
{
    int a[20][2]={{0,0x00},{10,0x00},{20,0x0f},{30,0xff},{40,0xff},{50,0x05},
    		{60,0xaa},{70,0x55},{80,0xfe}, {90,0x00},{100,0x00},{110,0x00},{120,0xff},
			{130,0xff},{140,0xff},{150,0xff},{160,0x11},{170,0x33}, {180,0x99},{190,0xe9}};   //assign value for 2d array
    int i;
                                                                                         //Print the time stamp where data is coming as noise
    for(i=0;i<20;i++)
        {
        printf("%d\t%x\n", a[i][0],a[i][1]);

        }
    printf("\nSensor Noise values are.........\n");
        for(i=0;i<20;i++){
            if(a[i][1]<0x05 || a[i][1]>0xf0){
                printf("%d\t",a[i][0]);                                                        
printf("\n");

            }
        }
                                                                                              // Delete the noise data and write valid sensor values
                                                                                              //to new 2-dimension array “Sensor_noNoice_Vlaue[Timestamp_Value][ Sensor_Data]”
                                                                                              //and print them – timestamp and values.
        printf("\nSensor Non noise values are.........");
        for(i=0;i<20;i++){
            if(a[i][1]>0x05 && a[i][1]<0xf0){
                printf("%d\t%x\n",a[i][0],a[i][1]);
                }
            }
           }
         }
}
