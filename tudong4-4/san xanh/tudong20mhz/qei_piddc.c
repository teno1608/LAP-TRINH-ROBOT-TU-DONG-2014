
///// QEI MEM + DU LIEU QEI
signed int16 En2;
#define ChanelA PIN_C4
#define ChanelB PIN_C5
#INT_EXT1
void  EXT1_L2H_isr(void) 
{
INTEDG1^=1;
if (INTEDG1)
   {
   if (input(ChanelB)) {En2--;} 
   else {En2++;}
   }
else 
   { 
   if (input(ChanelB)) {En2++;}
   else {En2--;}
   }
}
#int_EXT2
void  EXT2_isr(void) 
{
INTEDG2^=1;
if (INTEDG2)
   {
   if (input(ChanelA)) {En2++;} 
   else {En2--;}
   }
else 
   { 
   if (input(ChanelA)) {En2--;}
   else {En2++;}
   }
}

/// PID DONG CO 1 //////////////////
volatile float kp=2, ki=0.2,kd=0.7, pid1, pid2;
signed int16 realvt1, errs1=0, err1=0, delta1=0, epre1=0, duty1 ;
signed int16 realvt2, errs2=0, err2=0, delta2=0, epre2=0, duty2 ;
volatile unsigned int16 Ti1,Ti2;
volatile signed int16 setvt1,setvt2,vt1=900,vt2=900;

void piddc1(signed int16 setvt1, signed int16 vt1)
     {
     br1=0;
     realvt1 =  qei_get_count(); 
     err1 = setvt1 - realvt1;
     if(Ti1>=2)
     {
       delta1 = err1-epre1;
       Ti1=0;
       if(delta1>-10) errs1 += err1;//(err1>-20)&&(err1<20)
       if (errs1 > 200 ) errs1=200;
       if (errs1 < -200 ) errs1=-200;
       epre1=err1;
     }
  
     pid1 =kp*err1 + ki*errs1+kd*delta1; 
     duty1=pid1;   
     if (duty1 > 0)   dir1 = 0;
     if (duty1 <  0)    dir1 = 1;
     duty1= abs(duty1);
     if(duty1>5) duty1+=230;
     if(duty1>vt1) duty1=vt1;
     set_pwm1_duty (duty1);
     }
     
/// PID DONG CO 2 //////////////////

void piddc2(signed int16 setvt2, signed int16 vt2)
     {
     br2=0;
     realvt2 =  En2; 
     err2 = setvt2 - realvt2;
     if(Ti2>=2)
     {
       delta2 = err2-epre2;
       Ti2=0;
       if(delta2>-10) errs2 += err2; /// (err2>-20)&&(err2<20)
       if (errs2 > 200 ) errs2=200;
       if (errs2 < -200 ) errs2=-200;
       epre2=err2;
     }
  
     pid2 =kp*err2 + ki*errs2+kd*delta2; 
     duty2=pid2;    
     if (duty2 > 0)   dir2 = 1;
     if (duty2 <  0)    dir2 = 0;
     duty2= abs(duty2);
     if(duty2>5) duty2+=230;
     if(duty2>vt2) duty2=vt2;
     set_pwm2_duty (duty2);
     }
     



