//WAP to print integer array through pointers.

#include<stdio.h>
void main()
{
int n,ele,i;
printf("enter no.of elements\n");
scanf("%d",&n);

int a[n];
ele=sizeof(a)/sizeof(a[1]);

for(i=0;i<ele;i++)
scanf("%d",&a[i]);

int *p;
p=a;
for(i=0;i<ele;i++)
printf("%d ",*p++);

printf("\n");


}
