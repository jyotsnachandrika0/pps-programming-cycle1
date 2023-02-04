#include<stdio.h>
void main( )
{
int a=0,b=1,i,c,n;
printf("enter the value of n");
scanf("%d",&n);
printf("\n%d\n%d\n",a,b);
for(i=3;i<=n;i++){
c=a+b;
printf("%d\n",c);
a=b;
b=c;
}
}
