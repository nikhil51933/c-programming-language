//wap to merge two 1d arrays into single array

#include<stdio.h>
void merge(int **,int *,int,int);
void main()
{
	int n,n1;
	printf("enter rows and columns\n");
	scanf("%d%d",&n,&n1);
	int a[n][n1],b[n*n1],i,j;
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}

	merge(a,b,n,n1);

	for(i=0;i<n*n1;i++)
		printf("%d ",b[i]);
	printf("\n");
}
void merge(int **a,int *b,int n,int n1)
{
	int i,j,k;
	for(i=0,k=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			b[k++]=a[i*i][j];
			b[k++]=a[i*i+1][j];
		}
	}
}
