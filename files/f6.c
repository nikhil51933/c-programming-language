// char *fgets(char *,int size,file *stream);

#include<stdio.h>
void main(int argc,char **argv)
{
	FILE *fp;
	fp=fopen(argv[1],"r");
	char s[7],c;
	fgets(s,7,fp);
	printf("%s\n",s);
}
