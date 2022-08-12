// PIC18F458 Configuration Bit Settings

// 'C' source line config statements

// CONFIG1H
#pragma config OSC = HS         // Oscillator Selection bits (HS oscillator)
#pragma config OSCS = OFF       // Oscillator System Clock Switch Enable bit (Oscillator system clock switch option is disabled (main oscillator is source))

// CONFIG2L
#pragma config PWRT = OFF       // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOR = OFF        // Brown-out Reset Enable bit (Brown-out Reset disabled)
#pragma config BORV = 25        // Brown-out Reset Voltage bits (VBOR set to 2.5V)

// CONFIG2H
#pragma config WDT = OFF        // Watchdog Timer Enable bit (WDT disabled (control is placed on the SWDTEN bit))
#pragma config WDTPS = 128      // Watchdog Timer Postscale Select bits (1:128)

// CONFIG4L
#pragma config STVR = OFF       // Stack Full/Underflow Reset Enable bit (Stack Full/Underflow will not cause Reset)
#pragma config LVP = OFF        // Low-Voltage ICSP Enable bit (Low-Voltage ICSP disabled)

// CONFIG5L
#pragma config CP0 = OFF        // Code Protection bit (Block 0 (000200-001FFFh) not code protected)
#pragma config CP1 = OFF        // Code Protection bit (Block 1 (002000-003FFFh) not code protected)
#pragma config CP2 = OFF        // Code Protection bit (Block 2 (004000-005FFFh) not code protected)
#pragma config CP3 = OFF        // Code Protection bit (Block 3 (006000-007FFFh) not code protected)

// CONFIG5H
#pragma config CPB = OFF        // Boot Block Code Protection bit (Boot Block (000000-0001FFh) not code protected)
#pragma config CPD = OFF        // Data EEPROM Code Protection bit (Data EEPROM not code protected)

// CONFIG6L
#pragma config WRT0 = OFF       // Write Protection bit (Block 0 (000200-001FFFh) not write protected)
#pragma config WRT1 = OFF       // Write Protection bit (Block 1 (002000-003FFFh) not write protected)
#pragma config WRT2 = OFF       // Write Protection bit (Block 2 (004000-005FFFh) not write protected)
#pragma config WRT3 = OFF       // Write Protection bit (Block 3 (006000-007FFFh) not write protected)

// CONFIG6H
#pragma config WRTC = OFF       // Configuration Register Write Protection bit (Configuration registers (300000-3000FFh) not write protected)
#pragma config WRTB = OFF       // Boot Block Write Protection bit (Boot Block (000000-0001FFh) not write protected)
#pragma config WRTD = OFF       // Data EEPROM Write Protection bit (Data EEPROM not write protected)

// CONFIG7L
#pragma config EBTR0 = OFF      // Table Read Protection bit (Block 0 (000200-001FFFh) not protected from Table Reads executed in other blocks)
#pragma config EBTR1 = OFF      // Table Read Protection bit (Block 1 (002000-003FFFh) not protected from Table Reads executed in other blocks)
#pragma config EBTR2 = OFF      // Table Read Protection bit (Block 2 (004000-005FFFh) not protected from Table Reads executed in other blocks)
#pragma config EBTR3 = OFF      // Table Read Protection bit (Block 3 (006000-007FFFh) not protected from Table Reads executed in other blocks)

// CONFIG7H
#pragma config EBTRB = OFF      // Boot Block Table Read Protection bit (Boot Block (000000-0001FFh) not protected from Table Reads executed in other blocks)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.


#include <xc.h>
#define _XTAL_FREQ  2000000
#define ConfigurationMode_0x80 0x80
#define ListenOnlyMode_0x60  0x60
#define LoopbackMode_0x40 0x40
#define DisableMode_0x20 0x20
#define NormalMode_0x00 0x00
#define CANCON_TransmitBuffer_0 0x08
#define Transfer_Buffer_0 0
enum Rx_Buffer{Receiver_Buffer_0, Receiver_Buffer_1};  

char Rx_data_11bytes_Buffer_0[11]={0};
char Rx_data_11bytes_Buffer_1[11]={0};
char Rx_data_11bytes_Buffer_2[11]={0};
char Tx_data_8bytes_Buffer_0[8] = {0};
long long int current_spped_our_vehicle = 100;//in kmph 

    
int Sys_Init()
{
    GIE=1;//Global Interrupt Enable
    PEIE=1;//Peripheral Interrupt Enable
    
}
int CANSTAT_Get_Mode(void)
{
    if((CANSTAT == NormalMode_0x00))
    {
        return 1;
    }
    else if((CANSTAT == DisableMode_0x20))
    {
        return 1;
    }
    else if ((CANSTAT == LoopbackMode_0x40))
    {
        return 1;
    }
    else if ((CANSTAT == ListenOnlyMode_0x60))
    {
        return 1;
    }
    else if ((CANSTAT == ConfigurationMode_0x80))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void CANCON_Set_Mode(int mode)
{
    
    switch(mode)
    {
        case 0:
            CANCON = ConfigurationMode_0x80;// CANCON Register set to configure mode
            break;
        case 1:
            CANCON = ListenOnlyMode_0x60; // CANCON Register set to listen mode
            break;
        case 2:
            CANCON = LoopbackMode_0x40;// CANCON Register set to loop back mode
        case 3:
            CANCON = DisableMode_0x20;// CANCON Register set to disable mode
        case 4:
            CANCON = NormalMode_0x00;// CANCON Register set to normal mode
    }
}  
void Can_Init(){
    //  TRISA=0X00;                             //Trisa bits are set to high for LED as an Output
    TRISBbits.RB2=0;                        //Rb2 bit is set for output
    TRISBbits.RB3=1;                        //Rb3 bit is set for input
    //PIE3=0x02;                              //PIE3 register is set to enable Receiver Buffer 1
    //IPR3=0X02;                              //IPR3 register is set to enable 
    PIE3bits.RXB0IE = 1;           /*Enable receiver buffer 0 interrupt*/
    IPR3bits.RXB0IP = 1;           /*Enable receiver buffer 0 as high priority*/
}
void Set_BaudRate()  // baud rate function
{
    BRGCON1=0xC1;  //BRGCON1 register set to be 0xc1 for 250kbps.
    BRGCON2=0xAE;   //BRGCON2 register set to be 0xAE for 250kbps.
    BRGCON3=0x45;   //BRGCON3 register set to be 0x45 for 250kbps.
    
}
void Set_Filter()    //acceptance filter function
{
    RXF0SIDH=0x00;  // RXF0SIDH register set to 0x00.
    RXF0SIDL=0x00;  // RXF0SIDL register set to 0x00.
    
}
void Set_Mask()     //acceptance mack function
{
    RXM0SIDH=0x00;  //RXM0SIDH register set to 0x00;
    RXM0SIDL=0x00;  //RXM0SIDL register set to 0x00;
    
}
int Transmit_data(int Message_id)
{ 
    CANCON = CANCON_TransmitBuffer_0;
        TXB0SIDL = (Message_id) << 5;//for LSB 3 bits
        TXB0SIDH = (Message_id) >> 3;//for MSB 8 bits
        TXB0DLC = 0x08;
        TXB0D0 = Tx_data_8bytes_Buffer_0[0];
        TXB0D1 = Tx_data_8bytes_Buffer_0[1];
        TXB0D2 = Tx_data_8bytes_Buffer_0[2];
        TXB0D3 = Tx_data_8bytes_Buffer_0[3];
        TXB0D4 = Tx_data_8bytes_Buffer_0[4];
        TXB0D5 = Tx_data_8bytes_Buffer_0[5];
        TXB0D6 = Tx_data_8bytes_Buffer_0[6];
        TXB0D7 = Tx_data_8bytes_Buffer_0[7];
        //enable the TXBnCON  such that the transmitter buffer and assign the highest priority to the chosen buffer.
        TXB0CON = 0x0B;
        CANCON=NormalMode_0x00;
}

int CAN_Read_fun()
{
    CANCON=0x0C;//Select Normal Mode and Select Receive Buffer_0. 
    Rx_data_11bytes_Buffer_0[0] =  RXB0D0;//data_byte_0
    Rx_data_11bytes_Buffer_0[1] =  RXB0D1;//data_byte_1
    Rx_data_11bytes_Buffer_0[2] =  RXB0D2;//data_byte_2
    Rx_data_11bytes_Buffer_0[3] =  RXB0D3;//data_byte_3
    Rx_data_11bytes_Buffer_0[4] =  RXB0D4;//data_byte_4
    Rx_data_11bytes_Buffer_0[5] =  RXB0D5;//data_byte_5
    Rx_data_11bytes_Buffer_0[6] =  RXB0D6;//data_byte_6
    Rx_data_11bytes_Buffer_0[7] =  RXB0D7;//data_byte_7 
    Rx_data_11bytes_Buffer_0[8] =  RXB0SIDL;//LowByte_3bits
    Rx_data_11bytes_Buffer_0[9] =  RXB0SIDH ;//HigherByte_8bits
    Rx_data_11bytes_Buffer_0[10] =  RXB0DLC;//DLC 
    
    RXB0CONbits.RXB0FUL = 0;
    CANCON=NormalMode_0x00;//Resetting the Receiver Buffer_0 000 and set mode to Normal Mode  to get next data
    if(((RXB0SIDL >> 5) | (RXB0SIDH << 3)) == 0x78)
    {
         //RC2 = 1;
        return 0;//if message id is 0x78 then it will return 0
    }
    else
    {
        return 1; //else return 1
    }
}
__interrupt () ISR1()
{
    CANCON=NormalMode_0x00;
    if(RXB0IF)
    {
        RXB0IF=0;//Clear The Interrupt enable flag
        CAN_Read_fun();//CAN Rx is called
    }

}
void new_speed()
{
    
   if (current_spped_our_vehicle >= 0)
   {
        current_spped_our_vehicle -= 10;
        Tx_data_8bytes_Buffer_0[1] = ( current_spped_our_vehicle  >> 8); //assigning set speed to transmit byte
        Tx_data_8bytes_Buffer_0[0] = ( current_spped_our_vehicle); //assigning set speed to transmit byte
   }
   else
   {
       Tx_data_8bytes_Buffer_0[1] = 0; //assigning set speed to transmit byte
       Tx_data_8bytes_Buffer_0[0] = 0; //assigning set speed to transmit byte
   }
}

void main(void) {
    
    TRISC=0x00;//Set LED_1 & LED_2 as an Output
    Sys_Init();
    Can_Init();
    CANCON_Set_Mode(0);//Set Configuration Mode  the CANCON Register 
    Set_Mask();
    Set_Filter();
    Set_BaudRate();
    CANCON_Set_Mode(4);//Set Normal Mode
    
    int Message_id = 0x75;//transmitting message_id
    TRISB = 0x09;//input for switch and rx
    RC2 = 0;
    RBPU = 0;
    while(1)
    {
        if (RB0 == 0)//if CC is ON or switch is on or not
        {
            RC0 = 1;//led1 ON
            Tx_data_8bytes_Buffer_0[4] = 0x02;//updating CC ON status in byte4
            if (CAN_Read_fun() == 0)//CAN Rx is called
            {
               
                if( (Rx_data_11bytes_Buffer_0[7] & 1) == 0)//NRCS data is getting if bit 0 is 0 
                {
                    RC2 = 0;
                    Tx_data_8bytes_Buffer_0[6] = 0x1;//updating NRCS status in byte 6
                    RC1 = 0;//LED2 OFF
                    Tx_data_8bytes_Buffer_0[7] = 0x10;//updating warning lamp status in byte 7
                    Tx_data_8bytes_Buffer_0[4] = 0x02;//updating CC Fault status in byte4
                    if (Rx_data_11bytes_Buffer_0[1] <= 32)//if front vehicle is in the range of given distance 
                    {
                        //NRCS data ON  and  front vehicle in the range
                        Tx_data_8bytes_Buffer_0[2] = 0x00;//acceleration should be OFF
                        Tx_data_8bytes_Buffer_0[5] = 0xFF; //brake should be apply
                        new_speed();//assigining reduced speed
                    }
                    else
                    {
                        //NRCS data ON but No front vehicle in the range
                        Tx_data_8bytes_Buffer_0[1] = Rx_data_11bytes_Buffer_0[4]; //assigning set speed to transmit byte
                        Tx_data_8bytes_Buffer_0[0] = Rx_data_11bytes_Buffer_0[3]; //assigning set speed to transmit byte
                        Tx_data_8bytes_Buffer_0[2] = 0xFF;//acceleration should be ON
                        Tx_data_8bytes_Buffer_0[5] = 0x00; //brake should not be apply 
                        Tx_data_8bytes_Buffer_0[6] = 0x01;//updating NRCS status in byte 6
                        current_spped_our_vehicle = (Rx_data_11bytes_Buffer_0[4] << 15 | Rx_data_11bytes_Buffer_0[3]);//making current_speed_our_vehicle is equal to set speed
                    }
                }
                else
                {
                    //Fault condition
                    Tx_data_8bytes_Buffer_0[6] = 0x0;//updating NRCS status in byte 6
                    RC1 = 1; //LED2 is ON
                    Tx_data_8bytes_Buffer_0[4] = 0x03;//updating CC Fault status in byte4
                    Tx_data_8bytes_Buffer_0[7] = 0x18;//updating warning lamp status in byte 7
                    //for remaining bytes it follow the previous data
                }
            }
            else
            {
                    RC2 = 1;//receiving message id is not matched   
            }
            Transmit_data(Message_id);
        }
        else
        {
            RC0 = 0;//LED1  OFF -> CC is OFF -> switch is OFF
            RC1 = 0;//NO NRCS input
           // Tx_data_8bytes_Buffer_0[4] = 0x00;//updating CC OFF status in byte4
           // Tx_data_8bytes_Buffer_0[7] = 0x00;//updating warning lamp status in byte 7
        }
        __delay_ms(500);
    }//while
}