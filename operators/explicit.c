#include<stdio.h>
void main()
{
// explicit and implicit type casting

unsigned int i,j;
unsigned long int k;
i=2000000000,j=3;
printf("i=%u j=%u\n",i,j);
k=(unsigned long int)i*j;
printf("k=%lu\n\n",k);


i=2000000000,j=3;
printf("i=%u j=%u\n",i,j);
k=(unsigned long int)i*(unsigned long int)j;
printf("k=%lu\n\n",k);

/*unsigned int I,J,K;
I=2000000000,J=3;
printf("I=%u J=%u\n",I,J);
(unsigned long int)K=(unsigned long int)I*J;
printf("K=%u\n\n",K);                        lvalue  error because we do not assign value to left side            */

unsigned long int a,b;
unsigned  int c;
a=2000000000,b=3;
printf("a=%lu b=%lu\n",a,b);
c=(unsigned long int)a*b;
printf("c=%u\n",c);
}
