#include<stdio.h>
void main( )
{
int firstnumber;
int secondnumber;
printf("enter the firstnumber ,secondnumber");
scanf("%d %d",& firstnumber,& secondnumber);
printf("%d",firstnumber> secondnumber && firstnumber<secondnumber);
printf("%d",firstnumber==secondnumber||firstnumber>secondnumber);
printf("%d",firstnumber!=secondnumber && firstnumber>secondnumber);
printf("%d",firstnumber<secondnumber|secondnumber>firstnumber);
printf("%d",firstnumber=secondnumber& secondnumber<firstnumber);
int p=8;
printf("%d\n",p++);
printf("%d\n",p--);
return;
}
