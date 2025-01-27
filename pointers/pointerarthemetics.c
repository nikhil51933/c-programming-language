//we can do artmetic operations on pointer values but not on pointer adresses;


#include<stdio.h>
void main()
{
int i=10,j=20;
int *p,*q;
p=&i;
q=&j;

*p=*p**q;
printf("i=%d j=%d\n",i,j);
j=*p**q;
printf("i=%d j=%d\n",i,j);

i=*q/ *p;
printf("i=%d j=%d\n",i,j);

*q=*q/ *p;
printf("i=%d j=%d\n",i,j);

i=*p-*q;
printf("i=%d j=%d\n",i,j);

j=*p-*q;
printf("i=%d j=%d\n",i,j);



}

