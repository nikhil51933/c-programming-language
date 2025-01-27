//wap to replace a particular char with another char.

#include<stdio.h>
void main(int argc,char **argv)
{
	FILE *fp;
	if(argc!=4)
	{
		printf("usage:file char1 char2..\n");
		return;
	}
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("file is not present\n");
		return;
	}
	int c=0,i=0;
	while(fgetc(fp)!=-1)
		c++;
	rewind(fp);
	char t[c+1],ch;
	while((ch=fgetc(fp))!=-1)
	{
		t[i]=ch;
		i++;
	}
	t[i]='\0';
	rewind(fp);
	for(i=0;t[i];i++)
	{
		if(t[i]==argv[2][0])
			t[i]=argv[3][0];
	}
	for(i=0;t[i];i++)
	fputc(t[i],fp);

}

