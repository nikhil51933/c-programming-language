

#include<stdio.h>
void main()
{
typedef int * p;
p q,r;
int i=10;
q=&i;
r=&i;
printf("%lu\n",q);
printf("%lu\n",r);

}
