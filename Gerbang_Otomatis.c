/*******************************************************
This program was created by the CodeWizardAVR V3.48 
Automatic Program Generator
© Copyright 1998-2022 Pavel Haiduc, HP InfoTech S.R.L.
http://www.hpinfotech.ro

Project : 
Version : 
Date    : 20/04/2022
Author  : 
Company : 
Comments: 


Chip type               : ATmega16
Program type            : Application
AVR Core Clock frequency: 12,000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 256
*******************************************************/

// I/O Registers definitions
#include <mega16.h>
#include <delay.h>
#include <stdlib.h>

//alphanumeric lcd module function
#include <alcd.h>

// Declare your global variables here
int count;
char buff[10];
unsigned char jarak;
unsigned char jrk;
unsigned char sensor_jarak(){
    count = 0;
    PORTB.6 = 1;
    delay_us(15);
    PORTB.6 = 0;
    delay_us(2);
    while(PINB.7 == 0){}
    while(PINB.7 == 1){
    count++;
    }
 jrk = count * 0.05/2;
 return jrk;   
}

void main(void)
{
       DDRB = 0x00;
       PORTB = 0xC0;
       DDRC = 0xFF;
       PORTC = 0x03;
       lcd_init(16);

while (1)
      {
      // Place your code here
      jarak = sensor_jarak();
      lcd_clear();
      lcd_gotoxy(0,0);
      lcd_putsf("GERBANG OTOMATIS");
      lcd_gotoxy(0,1);
      lcd_putsf("JARAK : ");
      itoa(jarak, buff);
      lcd_gotoxy(9,1);  
      lcd_puts (buff);
      lcd_gotoxy(13,1);
      lcd_putsf("Cm");
      delay_ms(200);
      if(jarak <= 150){
      PORTC.0 = 1;
      PORTC.1 = 0;
      }else if(jarak > 150){
      PORTC.0 = 0;
      PORTC.1 = 1;
      }else{
      PORTC.0 = 0;
      PORTC.1 = 0;
      lcd_clear();
      }
}
}
