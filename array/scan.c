//WAP to scan array elements from yhe user and display it on the screen

#include<stdio.h> 
void main()
{
int n,ele,i;
printf("enter the n\n");
scanf("%d",&n);

int a[n];

ele=sizeof(a)/sizeof(a[0]);

printf("no.of elements=%d\n",ele);

for(i=0;i<ele;i++)
scanf(" %d",&a[i]);

for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

} 
