// WAP to print additon of even digits and multiplication of odd digits of a given number

#include<stdio.h>
void main()
{
int num,temp,sum=0,mul=1;
printf("enter any number\n");
scanf("%d",&num);

for( ;num; num/=10)
{
  temp=num%10;
  if(temp%2==0)
  sum=sum+temp;
  else
  mul=mul*temp;

}
printf("sum=%d mul=%d\n",sum,mul);

}
