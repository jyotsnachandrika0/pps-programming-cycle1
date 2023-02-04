#include<stdio.h>
#include<math.h>
void main( )
{
int i,s,u;
float a,t;
printf("enter speed and distance");
scanf("%d%d",&u,&s);
printf("enter the acceleration");
scanf("%f",&a);
for(i=1;i<=10;i++,s=s+3)
{
t=u+sqrt(u*u+2*a*s);
}
printf("at this floor time taken is %f",t);
return;
}
