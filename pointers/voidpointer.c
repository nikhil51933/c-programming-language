//WAP for bhevaiour of void pointer.

#include<stdio.h>
void main()
{
void *p;
p=0;

printf("p=%p \n",p);

int i=250;
printf("p=%p\n",p=&i);
printf("p=%d\n",*(int*)p);

char c='a';
printf("p=%p\n",p=&c);
printf("p=%d\n",*(char *)p);

float f=23.5;
printf("p=%p\n",p=&f);
printf("p=%d p=%f\n",*(float*)p,*(float *)p);

double d=23.56;
printf("p=%p\n",p=&d);
printf("p=%d p=%lf\n",*(double*)p);

}
