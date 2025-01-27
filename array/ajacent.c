//WAP to prove that the array elements are ajacent.

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

for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

//if the elements are ajacent adresses then they are ajacent.

a[ele]=20;
for(i=0;i<=ele;i++)
printf("%p %d\n",&a[i],a[i]);


}
