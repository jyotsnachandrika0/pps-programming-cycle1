#include<stdio.h>
void main( )
{
int choice,a,b,c;
printf("1 is sum \n 2is difference\n 3is product\n 4 is division\n 5 is mod\n");
printf("enter the choice");
scanf("%d",& choice);
printf("enter a,b");
scanf("%d%d",&a,&b);
switch(choice)
{
case 1: c=a+b;
printf("%d",c);
break;
case 2: c+a-b;
printf("%d",c);
break;
case 3: c=a*b;
printf("%d",c);
break;
case 4: c=a/b;
printf("%d",c);
break;
case 5: c=a%b;
printf("%d",c);
break;
default: printf("enter the choice between 1 and 5");
}
return;
}

