//WAP to copy array elements from one array to another array

#include<stdio.h>
void main()
{
int n,i,ele;
printf("enter no.of elements\n");
scanf("%d",&n);

int a[n],b[n];
ele=sizeof(a)/sizeof(a[4]);

for(i=0;i<ele;i++)
scanf("%d",a+i);

for(i=0;i<ele;i++)
printf("%d ",*(a+i));
printf("\n");

for(i=0;i<ele;i++)
{
b[i]=a[i];
printf("%d ",*(b+i));
}
printf("\n");
//for(i=0;i<ele;i++)
//printf("%d ",b+i);
//printf("\n");


}
