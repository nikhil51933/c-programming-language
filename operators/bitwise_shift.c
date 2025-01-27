#include<stdio.h>
void main()
{
int i,j,k;
i=1,j=2;
printf("i=%d j=%d\n",i,j);
// Bitwise left shift  formula = num*2^no.of shifts
k=i<<j;
printf("k=%d\n\n",k);

i=-1,j=2;
printf("i=%d j=%d\n",i,j);
k=i<<j;
printf("k=%d\n\n",k);

i=1,j=-2;
printf("i=%d j=%d\n",i,j);
k=i<<j;
printf("k=%d\n\n",k);

i=-1,j=-2;
printf("i=%d j=%d\n",i,j);
k=i<<j;
printf("k=%d\n",k);
}
