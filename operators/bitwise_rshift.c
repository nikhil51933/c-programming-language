#include<stdio.h>
void main()
{
// right shift operation is num=num/2^shift times
int i,j,k;
i=10,j=2;
printf("i=%d j=%d\n",i,j);

k=i>>j;
printf("k=%d\n",k);

k=11>>3;
printf("k=%d\n",k);

k=-10>>2;
printf("k=%d\n",k);

k=-10>>-2;
printf("k=%d\n",k);  // warning will come

k=-10>>9;
printf("k=%d\n",k);
}
