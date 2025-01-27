//WAP to print array elements in reverse order.

#include<stdio.h>
void main()
{
int a[5]={10,20,30,40,50};
printf("size of a=%ld\n",sizeof(a));

printf("size of each element is: %ld\n",sizeof(a[0]));

int ele,i;

ele=sizeof(a)/sizeof(a[0]);
printf("no.of elements in array=%d\n",ele);

//printing of array elements
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

//printing of array elements in reverse order
for(i=ele-1;i>=0;i--)
printf("%d ",a[i]);
printf("\n");


}
