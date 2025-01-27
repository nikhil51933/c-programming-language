//WAP to scanf and print array elements in different ways.

#include<stdio.h>
void main()
{
int n,ele,i;
printf("enter no.of elements to scan and print\n");
scanf("%d",&n);

char a[n];
ele=sizeof(a)/sizeof(a[1]);

for(i=0;i<ele;i++)
scanf(" %c",&a[i]);

for(i=0;i<ele;i++)
printf("%c ",a[i]);

for(i=0;i<ele;i++)
scanf(" %c",&i[a]);

for(i=0;i<ele;i++)
printf("%c ",i[a]);

for(i=0;i<ele;i++)
scanf(" %c",a+i);

for(i=0;i<ele;i++)
printf("%c ",a+i);

for(i=0;i<ele;i++)
scanf(" %c",&a[i]);

for(i=0;i<ele;i++)
printf("%c ",*(a+i));
}
