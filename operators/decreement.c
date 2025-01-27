#include<stdio.h>
void main()
{
int i,j;
//pre-decreement
i=10;
printf("i=%d\n",i);
--i;
printf("i=%d\n\n",i);
//post-decreement
i=10;
printf("i=%d\n",i);
i--;
printf("i=%d\n\n",i);
//pre-decreement
i=10;
printf("i=%d\n",i);
j=--i;
printf("i=%d j=%d\n\n",i,j);
//post-decreement
i=10;
printf("i=%d\n",i);
j=i--;
printf("i=%d j=%d\n\n",i,j);
//pre-decreement
i=10;
printf("i=%d\n",i);
j=--i;
printf("j=%d i=%d\n\n",j,i);
//post-decreement
i=10;
printf("i=%d\n",i);
j=i--;
printf("j=%d i=%d\n\n",j,i);


}
