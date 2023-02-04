#include<stdio.h>
void main( )
{
int a,b,c;
a=6,b=3,c=9;
 int max=(a>=b&&a>=c)?a:(b>=a&&b>=c)?b:c;
printf("max num is %d\n",max);
int min=(a<=b&&a<=c)?a:(b<=a&&b<=c)?b:c;
printf("min num is %d",min);
return;
}
