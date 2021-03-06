
#include <18F4431.h>
#device ADC=16

#FUSES NOWDT                    //No Watch Dog Timer
//#FUSES WDT128                   //Watch Dog Timer uses 1:128 Postscale
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(clock=40000000,crystal=10000000)
#use fast_io(a)
#use fast_io(d)
#use fast_io(c)
#use fast_io(e)
