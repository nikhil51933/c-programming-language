//WAP to print the sub elements of 2d array using pointer to an array

#include<stdio.h>
void ptoa(int,int,int (*)[]);
void main()
{
	int n,n1;
	printf("enter n.of rows and columns\n");
	scanf("%d%d",&n,&n1);

	int a[n][n1];
	int i,j;
	printf("enter array elements\n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
			scanf("%d",&a[i][j]);
	}
	printf("\n");

	ptoa(n,n1,a);

}

void ptoa(int n,int n1,int (*a)[n1])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}

}
