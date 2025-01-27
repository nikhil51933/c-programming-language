//WAP to prove how memory is leaked.

#include<stdio.h>
#include<stdlib.h>
#include<mcheck.h>
void main()
{
mtrace();
int *p,*temp;
p=malloc(4);
*p=10;

printf("%lu\n",temp);
temp=p;
printf("%lu\n",temp);
p=malloc(4);
*p=20;
printf("%lu\n",p);
free(p);
free(temp);
p=0;
temp=0;
printf("%lu\n",p);
printf("%lu\n",temp);
}
