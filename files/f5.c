//int fputs(const char *string,file *stream);

#include<stdio.h>
void main(int argc,char **argv)
{
	FILE *fp;
	fp=fopen(argv[1],"r+");
	int n;
	n=fputs(argv[2],fp);

	printf("%d\n",n);
}
