/*******************************************************
This program was created by the CodeWizardAVR V3.48 
Automatic Program Generator
© Copyright 1998-2022 Pavel Haiduc, HP InfoTech S.R.L.
http://www.hpinfotech.ro

Project : 
Version : 
Date    : 01/06/2022
Author  : 
Company : 
Comments: 


Chip type               : ATmega32
Program type            : Application
AVR Core Clock frequency: 12,000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 512
*******************************************************/

// I/O Registers definitions
#include <mega32.h>
#include <delay.h>

// Declare your global variables here
int i;

void inisiasi(void){
DDRD=0xff;
}

void nadaA(void){
for(i = 0; i < 440; i++){
PORTD.7 = 0;
delay_us(1136);
PORTD.7 = 1;
delay_us(1136);
    }
}

void nadaB(void){
for(i = 0; i < 493; i++){
PORTD.7 = 0;
delay_us(1014);
PORTD.7 = 1;
delay_us(1014);
    }
}

void nadaC(void){
for(i = 0; i < 523; i++){
PORTD.7 = 0;
delay_us(956);
PORTD.7 = 1;
delay_us(956);
    }
}

void nadaD(void){
for(i = 0; i < 587; i++){
PORTD.7 = 0;
delay_us(852);
PORTD.7 = 1;
delay_us(852);
    }
}

void nadaE(void){
for(i = 0; i < 659; i++){
PORTD.7 = 0;
delay_us(759);
PORTD.7 = 1;
delay_us(759);
    }
}

void nadaF(void){
for(i = 0; i < 698; i++){
PORTD.7 = 0;
delay_us(716);
PORTD.7 = 1;
delay_us(716);
    }
}

void nadaG(void){
for(i = 0; i < 783; i++){
PORTD.7 = 0;
delay_us(639);
PORTD.7 = 1;
delay_us(639);
    }
}


void main(void){
 DDRD = 0x80;
 
inisiasi();
nadaA();
nadaB();
nadaC();
nadaD();
nadaE();
nadaF();
nadaG();
}
