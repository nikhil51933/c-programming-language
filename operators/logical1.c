#include<stdio.h>
void main()
{
int i,j,k;
i=0,j=20;
printf("i=%d j=%d\n",i,j);

k=i&&(j=200);
printf("k=%d\n",k);   //in logical AND if the first operand/variable is 0 then it will not checks 2nd operand directly it prints the o/p as '0'

i=1,j=20;
printf("i=%d j=%d\n",i,j);
k=i||(j=3400);
printf("k=%d\n",k);   //in logical OR if the first operand/variable is 1 then it will not checks 2nd operand directly it prints the o/p as '1'
}
