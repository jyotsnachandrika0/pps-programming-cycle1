#include<stdio.h>
#include<math.h>
void main( )
{
float principleamount,time,rate;
principleamount=23,time=60,rate=4;
float compoundinterest=principleamount*pow((1+rate/100),time);
printf("%f",compoundinterest);
return;
}
