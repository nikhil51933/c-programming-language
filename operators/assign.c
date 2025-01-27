#include<stdio.h>
void main()
{
int i,j,k;      // declaration of variables
i=10;      // assignment of values

printf("i=%d\nj=%d\nk=%d\n",i,j,k);

j=i;
printf("j=%d\n",j);

k=i+j;
printf("k=%d\n",k);

k=20;
printf("k=%d\n",k);

k=10+j;
printf("k=%d\n",k);

/*

10=i;
printf("i=%d\n",i);

i+j=k;
printf("k=%d\n",k);

10+j=k;
printf("k=%d\n",k);  */


}
