/*pgrogram to create a led switch when button presssed it is going to turn on led then only switched off after next press
 * 
 * File:   button.c
 * Author: sk69648
 *
 * Created on September 12, 2022, 5:38 PM
 * 1 start the program 
 * configure every necessary bit 
 * include header files
 * define crystal oscillator frequancy
 * start main function
 * declare the inpout pin and out pin
 * turn on pullup registers
 * check for the input and take necessary actioninside infinte loop
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
#define __XTAL_FREQ 20000000 

int main(void)
{
    TRISBbits.RB0 = 1;                //directing the RB0 to input we are going to connect push button to RB0
    TRISCbits.RC0 = 0;                //directing the RC0 to output we are connecting LED to RC0 
    
    TRISBbits.RB1 = 1;                //directing the RB1 to input we are going to connect push button to RB0
    TRISCbits.RC1 = 0;                //directing the RC1 to output we are connecting LED to RC0 
    
    INTCON2bits.RBPU = 0;             //making RBPU bit in INTCON2 register in order to make all pullup resistors active in PORT B
    PORTCbits.RC0=0;                            //making RC0 into LOW to turn off the LED for the initial condition
    PORTCbits.RC1=0;                            //making RC0 into LOW to turn off the LED for the initial condition
    
    while(1)
    {
      if(PORTBbits.RB0==0) 
      {
         for(int j=0;j<5;j++)
        {
        PORTCbits.RC0 =1;                   // turn on LED by giving HIGH 
        for(unsigned long int i=0;i<150000;i++);  //software delay by using loop
        PORTCbits.RC0 =0;                   // turn off LED by giving LOW 
        for(unsigned long int i=0;i<150000;i++);
        } 
         for(int j=0;j<3;j++)
        
        {
        PORTCbits.RC1 =1;                   // turn on LED by giving HIGH 
        for(unsigned long int i=0;i<150000;i++);  //software delay by using loop
        PORTCbits.RC1 =0;                   // turn off LED by giving LOW 
        for(unsigned long int i=0;i<150000;i++);
        }  
      } 
                   
      else if(PORTBbits.RB1==0) 
      {
         for(int j=0;j<5;j++)
        {
        PORTCbits.RC1 =1;                   // turn on LED by giving HIGH 
        for(unsigned long int i=0;i<150000;i++);  //software delay by using loop
        PORTCbits.RC1 =0;                   // turn off LED by giving LOW 
        for(unsigned long int i=0;i<150000;i++);
        } 
         for(int j=0;j<3;j++)
        
        {
        PORTCbits.RC0 =1;                   // turn on LED by giving HIGH 
        for(unsigned long int i=0;i<150000;i++);  //software delay by using loop
        PORTCbits.RC0 =0;                   // turn off LED by giving LOW 
        for(unsigned long int i=0;i<150000;i++);
        }  
      } 
        
      else 
      {
          PORTCbits.RC0 =0;
          PORTCbits.RC1 =0;
          
      }
    
      
          
      
    }
}
