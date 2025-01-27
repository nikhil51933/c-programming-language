// wap to swap array elments.

#include<stdio.h>
void swap_2d(int **,int);
void main()
{
	int n,n1;
	printf("enter no.of rows and columns\n");
	scanf("%d%d",&n,&n1);
	int a[n][n1],i,j;
	printf("enter array elements\n");
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

	swap_2d(a,n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}

}
void swap_2d(int **a,int n1)

{
	int i,j,t[n1];
	for(i=0,j=;i<j;i++,j--)
	{
		t[n1]=a[i];
		a[i]=a[j];
		a[j]=t[n1];

	}

}
