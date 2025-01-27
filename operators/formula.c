#include<stdio.h>
void main()
{
// to find (a+b)^2
int a=9,b=3;
a=a*a+b*b+2*a*b;
printf("(a+b)^2=%d\n",a);

// to find (a+b)^3

int c=2,d=3;
c=c*c*c+d*d*d+3*c*c*d+3*d*d*c;
printf("(a+b)^3=%d\n",c);
}
