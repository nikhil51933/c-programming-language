//WAP to allocaye dynamic memory for 2d (or) n number of arrays.

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int **p,i,j,r,c;
	printf("enter rows and columns\n");
	scanf("%d%d",&r,&c);
	p=(int **)calloc(r,sizeof(int *));
	printf("enter array elements\n");
	for(i=0;i<r;i++)
	{
		p[i]=(int *)malloc(sizeof(int)*c);
		for(j=0;j<c;j++)
			scanf("%d",&p[i][j]);
	}
        printf("--------------------------------------------\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}

	free(p);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}

}
