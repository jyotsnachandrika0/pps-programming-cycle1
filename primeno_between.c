#include<stdio.h>
void main( )
{
int n,i,j,m;
printf("enter the value of n ");
scanf("%d",&n);
printf("\n1");
for(i=1;i<=n;i++)
{
for(j=2;j<i;j++)
{
if(i%j==0)
m++;
}

if(m==0)
printf("\n%d",i);
m=0;
}
}
