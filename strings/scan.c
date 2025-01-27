//WAP to scan string 

#include<stdio.h>
void main()
{
char n,ele,i;
printf("enter no.of elements\n");
scanf("%d",&n);

char a[n];
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
scanf(" %s",a+i);
for(i=0;i<ele;i++)
printf("%c",a[i]);
printf("\n");
}
