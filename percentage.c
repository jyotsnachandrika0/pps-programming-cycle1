#include<stdio.h>
void main( )
{
int percentage;
printf("enter the percentage");
scanf("%d",& percentage);
if(percentage>=70)
printf("Distinction");
else if(percentage>=60&&percentage<70)
printf("first class");
else if(percentage>=40&&percentage<60)
printf("second class");
else if(percentage<40)
printf("fail");
else{
printf("enter the percentage between 1 and 100");
}
printf("percenatge obtained is %d",percentage);
return ;
}
