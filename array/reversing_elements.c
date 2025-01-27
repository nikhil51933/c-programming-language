//WAP to reverse each element of given integer array.

#include<stdio.h>
void main()
{
	int n,i,j,r,rev;
	scanf("%d",&n);

	int a[n];

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n;i++)
		printf("%d ",a[i]);

	printf("\n");

	for(i=0;i<n;i++)
	{
		for(rev=0;a[i];a[i]/=10)
		{
			r=a[i]%10;
			rev=rev*10+r;
		}
		a[i]=rev;
	}

	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
