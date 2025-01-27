// different types of declarations and intializations of array.

#include<stdio.h>
void main()
{
int i,ele;
int a[5];
//int a[5]={1,2,3,4,5};
//int a[5]={1,2};
//int a[5]={1,2,3,4,5,6,7};
//int a[]={1,2,3,4,5,6,7,8};
//int a[];
//ele=sizeof(a)/sizeof(a[3]);
//printf("no,of elements=%d\n",ele);
printf("%d\n",a[0]);


for(i=0;i<ele;i++)
scanf("%d ",&a[i]);

for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
