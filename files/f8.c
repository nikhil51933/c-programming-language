//how to read integer array from file

#include<stdio.h>
void main(int argc,char **argv)
{
	FILE *fp;
	fp=fopen(argv[1],"r");

	if(fp==0)
	{
		printf("no file present\n");
		return;
	}

	int a[5],i;
	for(i=0;i<5;i++)
		fscanf(fp,"%d",&a[i]);

	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("\n");
}
