#include<stdio.h>
void main()
{
// to print sum of given digits of a number
int a=49,b;
printf("given number a=%d\n",a);

b=a%10;
a=a/10;
a=a+b;

printf("sum of digits of a=%d\n",a);

// three digit number
int c=123,d,e;

printf("given number c=%d\n",c);

d=c%10;
c=c/10;
e=c%10;
c=c/10;
c=c+d+e;

printf("sum of digits of c=%d\n",c);

}
