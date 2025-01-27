//WAP to print sub elements of an array

#include<stdio.h>
void main()
{
	int n,n1;
	printf("enter no.of rows amnd colums\n");
	scanf("%d%d",&n,&n1);
	int a[n][n1],i,j;
	int (*p)[n1];
	p=a;
	printf("enter array elements\n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
			scanf("%d",&a[i][j]);
	}

	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}


}
