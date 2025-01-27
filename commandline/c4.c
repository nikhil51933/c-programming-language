

#include<stdio.h>
void main(int argc,char **argv)
{
	int l,i,j;
	char t;
	for(i=0;i<argc;i++)
	{
		for(l=0;argv[i][l];l++);
		for(l=l-1,j=0;j<l;j++,l--)
		{
			t=argv[i][j];
			argv[i][j]=argv[i][l];
			argv[i][l]=t;
		}

		printf("%s\n",argv[i]);
	}


}
