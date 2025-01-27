// WAP to swap adjacent elements of given integer array.

#include<stdio.h>
void main()
{
	int n,ele,i,t,j;
	printf("enter no.of array elements\n");
	scanf("%d",&n);

	int a[n];
	ele=sizeof(a)/sizeof(a[0]);
	printf("no.of elements=%d\n",ele);

	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	printf("before swapping:\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);

	if(n%2==0)
		j=ele;
	else
		j=ele-1;
	for(i=0;i<j;i+=2)
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}

	printf("\nafter swapping:\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");



}
