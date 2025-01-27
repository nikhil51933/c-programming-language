#include<stdio.h>
void main()
{
int a,b,d,e,f,c;
a=1,b=2,d=-1,e=3,f=2;
printf("a=%d b=%d d=%d e=%d f=%d\n",a,b,d,e,f);
c=a>b;
// true = 1     false = 0
printf("c=%d\n",c);
c=b>a;
printf("c=%d\n",c);
printf("%d\n\n",e<f>e);

printf("%d\n\n",a>b<d==e);

c=a!=b>d<f==e;
printf("c=%d a=%d\n\n",c,a);
}
