

// PIC18F458 Configuration Bit Settings

// 'C' source line config statements

// CONFIG1H
#pragma config OSC = HS         // Oscillator Selection bits (HS oscillator)
#pragma config OSCS = OFF       // Oscillator System Clock Switch Enable bit (Oscillator system clock switch option is disabled (main oscillator is source))

// CONFIG2L
#pragma config PWRT = OFF       // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOR = ON         // Brown-out Reset Enable bit (Brown-out Reset enabled)
#pragma config BORV = 25        // Brown-out Reset Voltage bits (VBOR set to 2.5V)

// CONFIG2H
#pragma config WDT = ON         // Watchdog Timer Enable bit (WDT enabled)
#pragma config WDTPS = 128      // Watchdog Timer Postscale Select bits (1:128)

// CONFIG4L
#pragma config STVR = ON        // Stack Full/Underflow Reset Enable bit (Stack Full/Underflow will cause Reset)
#pragma config LVP = ON         // Low-Voltage ICSP Enable bit (Low-Voltage ICSP enabled)

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


/*
 * program to use 2 push button and 2 LED 
 * when first pushbutton pressed the first and second pattern in the enmerated datatype that is 0x00 and 0x01 should given to corresponding port
 *  when second pushbutton pressed the third and forth pattern in the enmerated datatype that is 0x10 and 0x11 should given to corresponding port
 */

#include <xc.h>
#define _XTAL_PREQ 20000000

enum led_port {first = 0x00,second =0x01,third = 0x02, forth = 0x03};   
void main()
{  TRISB = 0x03;
   INTCON2bits.RBPU=0;
   TRISC = 0x00;
   PORTC = 0x00;
   while(1)
   {
       /* 
        * if pushbutton connected to RB0 will be zero then trigger the first and second pattern LED
        * other wise if pushbutton connected to the RB1 become zero then trigger third and forth pattern to LED
        */
      if(PORTBbits.RB0 ==0 /*0 && PORTBbits.RB1 == 1*/ ) 
      {
         PORTC = first;
         for(unsigned long int i =0;i<150000;i++);
         PORTC = second;
         for(unsigned long int i =0;i<150000;i++);
      }
      else if(PORTBbits.RB1 == 0 /*0 && PORTBbits.RB1 == 1*/ ) {
         PORTC = third;
         for(unsigned long int i =0;i<150000;i++);
         PORTC = forth;
         for(unsigned long int i =0;i<150000;i++);
      }
      /*
       * if both of the condittion is not satisfied then turn of both the LED by giving the first pattern that is 0X00
       */
      else 
           PORTC = first;
          
   }
}

