#include<stdio.h>
void main()
{
// multiple bitwise operators in same expression

int i,j,k,l,m,r;
i=2,j=3,k=1,l=4,m=5;
printf("i=%d j=%d k=%d l=%d m=%d\n",i,j,k,l,m);

r=i&j|k;
printf("r=%d\n\n",r);

r=i&j|k^l;
printf("r=%d\n\n",r);

//r=i&j|k^l~m;
printf("r=%d\n",r);
}
