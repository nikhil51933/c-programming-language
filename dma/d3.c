///WAP to allocate dmemory for n no.of integers


#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i,*p;
printf("enter no.of integers to allocat\n");
scanf("%d",&n);
p=malloc(n*4);
printf("enter numbers\n");
for(i=0;i<n;i++)
scanf("%d",&p[i]);
for(i=0;i<n;i++)
printf("%d\n",p[i]);
}




