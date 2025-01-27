//WAP to print integer array through pointers.

#include<stdio.h>
void main()
{
int n,ele,i;
printf("enter no.of elements\n");
scanf("%d",&n);

char a[n];
ele=sizeof(a)/sizeof(a[1]);

for(i=0;i<ele;i++)
scanf(" %c",&a[i]);

char *p;
p=a;
for(i=0;i<ele;i++)
printf("%c",*p++);

printf("\n");


}
