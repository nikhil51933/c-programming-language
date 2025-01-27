//difference b/w float and int

#include<stdio.h>
void main()
{
float f=23.5;
int *p,pos;
p=(int *)&f;

for(pos=31;pos>=0;pos--)
printf("%d",*p>>pos&1);
printf("\n");

printf("*p=%d, *p=%f\n",*p,f);



}
