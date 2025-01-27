#include<stdio.h>
void main()
{
// to perform bitwise and,or,compliment operations

int i,j,k;
i=10,j=15;
printf("i=%d j=%d\n",i,j);

k=i&j;
printf("k=%d\n",k);

k=i|j;
printf("k=%d\n",k);

k=i^j;
printf("k=%d\n",k);

k=~i;
printf("k=%d\n\n",k);

//if i=100,j=150;
i=100,j=150;
printf("i=%d j=%d\n",i,j);

k=i&j;
printf("k=%d\n",k);

k=i|j;
printf("k=%d\n",k);

k=i^j;
printf("k=%d\n",k);

k=~i;
printf("k=%d\n\n",k);

//if i=-100,j=-150;
i=-100,j=-150;
printf("i=%d j=%d\n",i,j);

k=i&j;
printf("k=%d\n",k);

k=i|j;
printf("k=%d\n",k);

k=i^j;
printf("k=%d\n",k);

k=~i;
printf("k=%d\n",k);
}
