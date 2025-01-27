//design a function to print the 2d array elements.

#include<stdio.h>
void print(int ,int ,int **);
void main()
{
	int *a[]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j,r,c;
	r=sizeof(a)/sizeof(a[0]);
	c=sizeof(a[0])/sizeof(a[0][0]);
	for(i=0;i<r;i++)
	{
		//for(j=0;j<c;j++)
			printf("%d ",a[i]);
		printf("\n");
	}
//	print(r,c,a);


}
void print(int r,int c,int **a)
{
int i,j;

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",a[i][j]);
	printf("\n");
	}
}
