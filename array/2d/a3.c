// wap to copy 2d array elemets into anoher 2d

#include<stdio.h>
void main()
{
	int n,n1;
	printf("enter no.of rows and columns\n");
	scanf("%d%d",&n,&n1);
	int a[n][n1],b[n][n1],i,j;
	printf("entetr array elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
			scanf("%d",&a[i][j]);
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
			printf("%d ",a[i][j]);
		printf("\n");

	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
			b[i][j]=a[i][j];

	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
			printf("%d ",b[i][j]);
			printf("\n");
	}
}
