#include<stdio.h>
void main( )
{
int n,sum=0,num,rev=0,rem;
printf("enter the value of n");
scanf("%d",&num);
n=num;
while(n>0){
rem=n%10;
sum=sum+rem;
rev=(rev*10)+rem;
n=n/10;}
if(num==rev)
printf("palindrome");
else
printf("not palindrome");
}   
                                                                                                                          
