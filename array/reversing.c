//WAP for reversing the array elements .

#include<stdio.h>
void main()
{
	int n,ele,i,j,t;
	printf("enter the no.of array elements\n");
	scanf("%d",&n);

	int a[n];
	ele=sizeof(a)/sizeof(a[0]);
	printf("no.of elements=%d\n",ele);

	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	printf("before reversing:\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);


	for(i=0,j=ele-1;i<j;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;

	}

	printf("\nafter reversing:\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
