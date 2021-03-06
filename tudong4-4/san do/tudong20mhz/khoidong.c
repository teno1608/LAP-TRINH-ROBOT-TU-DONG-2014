///// KHOI DONG PIC
/*
#include <18F4431.h>
#include <PIC18F4431_registers.h>
//#device ADC=16
#include <stdlib.h>
#include <stdio.h>

#FUSES NOWDT                    //No Watch Dog Timer
//#FUSES WDT128                   //Watch Dog Timer uses 1:128 Postscale
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O
//#FUSES H4
#use delay(clock=40000000,crystal=10000000)
//#use spi(MASTER ,FORCE_HW, BITS=16)
//#bit ss1 = PORTD.0
#use fast_io(a)
#use fast_io(d)
#use fast_io(c)
#use fast_io(e)
*/
void khoidong()
{
   trisa=0b00011000; /// DAU VAO QEI CUNG
   porta=0b11100111;
   trisb=0b11111111; /// DAU VAO CONG TAC HANH TRINH
   port_b_pullups(0xff);
   portb=0xff;
   trisc=0b00110000; /// DAU VAO QEI MEM
   portc=0b00000000;
   trisd=0b00000100; /// DAU VAO SPI 0b00000100
   portd=0b11110100;
   trise=0b00000000;
   porte=0b11111111;
   
   enable_interrupts(INT_EXT1);
   enable_interrupts(INT_EXT2);
   
   //enable_interrupts(int_timer0);
   //enable_interrupts(int_timer1);
   //enable_interrupts(int_timer5);
   
   enable_interrupts(GLOBAL);
   ext_int_edge(1,L_to_H);
   ext_int_edge(2,L_to_H);
   
   clear_interrupt(INT_EXT1);
   clear_interrupt(INT_EXT2);
   clear_interrupt(int_timer0);
   clear_interrupt(int_timer1);
   clear_interrupt(int_timer5);
   
   setup_qei(QEI_MODE_X4_RESET_WITH_INDX,qei_filter_enable_qea|qei_filter_enable_qeb|qei_filter_div_2,65535);
   qei_set_count(0);
   
   //setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);      //6.5 ms overflow, 0.1us
   //set_timer0(64535);
   
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_2|RTCC_8_bit);      //102 us overflow, 0.4us
   set_timer0(5);
   setup_timer_1(T1_INTERNAL|T1_DIV_BY_4);      //52.4 ms overflow, 0.8us
   set_timer1(50286);
   setup_timer_5(T5_INTERNAL|T5_DIV_BY_4);      //52.4 ms overflow, 0.8us
   set_timer5(53035);
   
   //setup_spi(SPI_MASTER|SPI_L_TO_H|SPI_CLK_DIV_16);
   //ss1=1;

     
}


