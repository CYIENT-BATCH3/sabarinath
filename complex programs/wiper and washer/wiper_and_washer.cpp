/*
 * File:   wiper and washer
 * Author: sk69648
 * 
 * start
 * define all the registers for the can transmission and reception
 * continuosly transmit the status of the door using address 0x112 with default status as 0x60 that is rain_status is no rain and water tank in moderate
 * transmission happeneing in time intervel of 1 seconds
 * receive the can msg when the interupt is occured
 * copy all the receive buffer register values to the arrays including 8 data byte 1 dlc sidl and sidh
 * according to the value in 3 byte received from only certain id ( bit 23 and 567 ) change the  status of transmitting msg 
 * send the status recieved from the 0x221 and send the same data on 0x112 to bus master 
 * Created on September 24, 2022, 10:35 AM
 * 
 */


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
#define ENABLE 1                    
#define ENABLE 1                //macros for enable and disable
#define DISABLE 0

#define _XTAL_FREQ 20000000     //external crystal oscillator frequancy

enum modes{CONFIG_MODE = 0X80,NORMAL_MODE = 0X08};      //creating enum for the modes 

char rain_sensor=0x0C,water_tank=0xE0;
char data_byte[11];                                     //creating array for storing data received as global variable
char reg_val = 0x60;                                    //flag for reg val _status
char reg_val1=0,reg_val2 = 0;                           //variable for extracting lower nibble and upper nibble


/* function prototype for the function used for both transmitter and reciever */
void sys_init();
void can_init();
void set_mode(char);
void get_mode(char);
void set_baudrate();

/* prototype for the function used for the can receiver */
void set_mask();
void set_filter();
void can_read();
//void led_fun();

/* prototype for the can write operation */
void can_write();

/*function for the checking the received signal and changing the status of transmitted signal */
void check_status();
void set_the_byte();


void main(void)
{
    
    TRISBbits.RB0 = 0;          //for trouble shooting purpose
    PORTBbits.RB0 = 0;
     
    sys_init();                 //intiaising the can protocol
    can_init();
    set_baudrate();
    set_mask();
    set_filter();
    
    
    while(1)
    {
      
        can_write();             //transmit the led status
        __delay_ms(1000);            //delay of 1 sec
        
        
        
    } 
    
    
}
/*-------------- initialization of can bus -----------------------------------*/
void sys_init()
{
    GIE = ENABLE;               //enable global interrupt
    PEIE = ENABLE;              //enable peripheral interrupt
    PIE3bits.RXB0IE =ENABLE;    //enable can interrupt enable
    IPR3bits.RXB0IP=ENABLE;     //enable priority setting
    
}

void can_init()
{
    TRISBbits.RB3 = ENABLE;      //init the can pins for the transmission and recieve
    TRISBbits.RB2 = DISABLE;
}

void set_baudrate()             //set the baud rate to 250 kbps
{
   
    set_mode(CONFIG_MODE);      //make the mode to config mode
    get_mode(CONFIG_MODE);       //check weather it is in config mode
    BRGCON1 = 0XC1;
    BRGCON2 = 0XAE;
    BRGCON3 = 0X45;
    CIOCON = 0X20;
    set_mode(NORMAL_MODE);      //change back to normal mode
   
    
   
}

void set_mode(char mode)
{
   CANCON = mode;               //set the mode accoding to argumnet
}


void get_mode(char mode)
{
    while(CANCON != mode);      //chack the mode
}

/*---------------- receiver code ----------------------------------------------*/
void set_mask()                 //set mask to 0x00 to recieve all message id    
{
    RXM0SIDH = 0x00;
    RXM0SIDL = 0x00;
}


void set_filter()                //set all filter to 0x00 to recieve all msg id
{
    RXF0SIDH = 0x00;
    RXF0SIDL = 0x00;
    RXF1SIDH = 0x00;
    RXF1SIDL = 0x00;
    
    //RXB0CON = 0x00;     //check at compilation
    
}




void __interrupt() ISR1()               //interrupt service routing
{
    if(PIR3bits.RXB0IF)                 //check for can interrupt
    {
         //PORTBbits.RB0 = 1;             
        PIR3bits.RXB0IF = DISABLE;      //make interrpt as clear
        can_read();                      //call can read fn
        
    }
}

void can_read()
{
    CANCON = 0x0E;              //set to normal mode and recieve on buffer 0
    RXB0CON = 0x00;             //clear the rxful bit
    
   
      data_byte[0] = RXB0D0;    //accpet and assighn all data from buffer to array
      data_byte[1] = RXB0D1; 
      data_byte[2] = RXB0D2; 
      data_byte[3] = RXB0D3; 
      data_byte[4] = RXB0D4; 
      data_byte[5] = RXB0D5; 
      data_byte[6] = RXB0D6; 
      data_byte[7] = RXB0D7; 
      data_byte[8] = RXB0DLC;
      data_byte[9] = RXB0SIDL;
      data_byte[10]= RXB0SIDH; 
      
    
    RXB0CONbits.RXFUL = 0;      //to clear the data in buffer for the next reception
    
    check_status();              //call the check status checking fn
    
}


void check_status()             //check the status of 3 rd byte 
{
    if(data_byte[9]==0x20 && data_byte[10] == 0x44)         //only selscteing particular id for accepting the 
    {
   
    
    rain_sensor = data_byte[3] & (0x0F);                    //selecting the lower nibble to rain sensor
    //rain_sensor = rain_sensor>>2;
    
    water_tank = data_byte[3] & (0xF0);                     //selecting higher nibble to water tank
   // water_tank = water_tank>>5;
    
    set_the_byte();                                         //set the bit value according to the condition by calling fn
    }
}

/*----------------------------- transmitter code ----------------------*/

void set_the_byte()
{
    /* one method of comparing values with 16 comparison
     * if(rain_sensor == 0 && water_tank ==0)
        reg_val = 0;
    else if(rain_sensor == 0 && water_tank ==1)
        reg_val = 0;
    else if(rain_sensor == 0 && water_tank ==2)
        reg_val = 0;
    else if(rain_sensor == 0 && water_tank ==3)
        reg_val = 0;
    else  if(rain_sensor == 1 && water_tank ==0)
        reg_val = 0;
    else if(rain_sensor == 1 && water_tank ==1)
        reg_val = 0;
    else if(rain_sensor == 1 && water_tank ==2)
        reg_val = 0;
    else if(rain_sensor == 1 && water_tank ==3)
        reg_val = 0;
    else  if(rain_sensor == 2 && water_tank ==0)
        reg_val = 0;
    else if(rain_sensor == 2 && water_tank ==1)
        reg_val = 0.
     * ;
    else if(rain_sensor == 2 && water_tank ==2)
        reg_val = 0;
    else if(rain_sensor == 2 && water_tank ==3)
        reg_val = 0;
    else  if(rain_sensor == 3 && water_tank ==0)
        reg_val = 0;
    else if(rain_sensor == 3 && water_tank ==1)
        reg_val = 0;
    else if(rain_sensor == 3 && water_tank ==2)
        reg_val = 0;
    else if(rain_sensor == 3 && water_tank ==3)
        reg_val = 0;
    else
        reg_val = 0;
     * */
    
    /* same process with only 8 comparison */
    if(rain_sensor == 0X00)                     //condition for rain water total 4 condition
        reg_val1 = 0x00;
    else if(rain_sensor == 0X04)
        reg_val1 = 0x04;
    else if(rain_sensor == 0X08)
        reg_val1 = 0x08;
    else if(rain_sensor == 0X0C)
        reg_val1 = 0x0c;
    
    if(water_tank == 0X20)                      //condition for water tank total 4 condition
        reg_val2 = 0x20;
    else if(water_tank == 0X40)
        reg_val2 = 0x40;
    else if(water_tank == 0X60)
        reg_val2 = 0x60;
    else if(water_tank == 0X80)
        reg_val2 = 0x80;
   
    reg_val = reg_val1 | reg_val2;              //or both cases to get final 8 bit frame
}



void can_write()
{
   // __delay_ms(500);
     CANCON = NORMAL_MODE;                  //set to normal mode
     //while(CANSTAT != NORMAL_MODE);
     CIOCON = 0X20;
    
     
     TXB0SIDH = 0x22;                   //for address 112 we can put SIDL is 0x40 and SIDH is 0x22
     TXB0SIDL = 0x40;
     TXB0DLC = 0X08;
     TXB0D0  = 0X00;
     TXB0D1  = 0X00;
     TXB0D2  = reg_val;
     TXB0D3  = 0x00;
     TXB0D4  = 0X00;
     TXB0D5  = 0X00;
     TXB0D6  = 0X00;
     TXB0D7  = 0X00;
     TXB0CON = 0x08; 
}


