// basic program of pointer.
#include<stdio.h>
void main()
{
int i=10,j=20;
int *p;
printf("intially i=%d  j=%d\n",i,j);

p=&i;
printf("i=%d *p=%d\n",i,*p);

*p=100;
printf("i=%d *p=%d\n",i,*p);

p=&j;
printf("j=%d *p=%d\n",j,*p);

*p=200;
printf("j=%d *p=%d\n",j,*p);

printf("after i=%d j=%d *p=%d\n",i,j,*p);

}
