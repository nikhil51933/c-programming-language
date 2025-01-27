//WAP to print sum using functions.

#include<stdio.h>
void sum();
void main()
{
sum();
printf("hello\n");
sum();


}
void sum()
{
int a,b,sum;
printf("enter any two numbers\n");
scanf("%d%d",&a,&b);
sum=a+b;
printf("sum=%d\n",sum);

}
