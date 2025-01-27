//user defined grep command, it will search a word/string if it found it will display enire line. 


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("too few arguments\n");
		return;
	}
	FILE *fp;
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file is not present\n");
		return;
	}
	int c=0,l=0;
	char ch;
	while((ch=fgetc(fp))!=-1)
	{
		c++;
		if(ch=='\n')
		{
			if(c>l)
				l=c;
			c=0;
		}

	}
	rewind(fp);
	char *p;
	p=malloc(l+1);

	while(fgets(p,l+1,fp))
	{
		if(strstr(p,argv[2]))
			printf("%s\n",p);
	}
}
