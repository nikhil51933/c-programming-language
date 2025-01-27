//WAP to store float numbers using ieee

#include<stdio.h>
void main()
{
float f=23.5,*fp;
double d=23.5,*dp;
fp=&f;
dp=&d;

printf("f=%f f=%g f=%e fp=%p\n",f,f,f,fp);
printf("d=%lf d=%g d=%e dp=%p\n",d,d,d,dp);


}
