/*
 * File:   spi_master.c
 * Author: sk69648
 *
 * start
 * set all configuration register for spi communication and input output operation
 * connect the 2 push button and transmit the data of pushbutton status through the spi communication
 * 
 * Created on September 15, 2022, 11:39 AM
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

#define _XTAL_FREQ 2000000              //set the crystal oscillator frequancy to 20 MHZ
#include <xc.h>

void spi_init_master(void)               //function for intilizing the spi master
{
    TRISA = 0x00;                           //making port a to output
    TRISC = 0x10;                           //making only 1 pin RA5 as input and all other as ouput
    PORTC = 0x00;                           //PORTC as output
    SSPSTAT = 0xc0;                         //SSPSTAT as 0xc0 for 
    SSPCON1 = 0x22;                         //making sspcon1 as 0x22
    ADCON0 = 0;                             //disableing all analog functionalities of the port a
    ADCON1 = 0x0f;
    PIE1bits.SSPIE = 1;                     //enabling th einterupt for the spi comm
}

void spi_write(unsigned char x)             //spi write function
{
    RD0 = 0;                                //making clock as 0 for start the transmission
    SSPBUF = x;                             //then assighn the data to sspbuf register
    while(!PIR1bits.SSPIF);                 //check the sspiflag  become 1
    PIR1bits.SSPIF = 0;
    RD0 = 1;                                //disable the clock
}



void main(void) {
                                            //main function
    spi_init_master();                      //initilize the spi communication
    TRISB = 0x03;                           //TRISB is 0x03
    TRISD = 0x00;                           //trisd as output for the chip select
    RBPU = 0;                               //turn on pullup resistors
                               

    while(1)
    {
        if(!PORTBbits.RB0)                  //check for the RBO for the input
            spi_write(0x01);
        else if(!PORTBbits.RB1)             //then check for the RB1 for the input
            spi_write(0x02);
        else
            spi_write(0x00);
          
        
    }
    
    return;
}
