//WAP to arrange lines in the form of length.


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("usage:a.out filename\n"); 
		return;
	}
	FILE *fp;
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file is not present\n");
		return;
	}
	int c=0,l=0,c1=0,i,j;
	char ch;
	while((ch=fgetc(fp))!=-1)
	{
		c++;
		if(ch=='\n')
		{
			c1++;
			if(c>l)
			{
				l=c;
				c=0;
			}
		}
	}
	rewind(fp);
	char **p,*t;
	p=calloc(c1,l+1);
	for(i=0;i<c1;i++)
		p[i]=malloc(l+1);


	for(i=0;i<c1;i++)
	{	j=0;
		while((ch=fgetc(fp))!=-1)
		{
		if(ch!='\n')
		p[i][j++]=ch;
		else
		break;
		}
		p[i][j]='\0';		
	}

	rewind(fp);
	fclose(fp);
	for(i=0; i<c1; i++)
		printf("%s\n", p[i]);
		printf("\n");
	
	fp = fopen(argv[1],"w");
	for(i=0;i<c1;i++)
	{
		for(j=i+1;j<c1;j++)
		{
			if(strlen(p[j])<strlen(p[i]))
			{
				t=p[j];
				p[j]=p[i];
				p[i]=t;
			}
		}
	}
	for(i=0; i<c1; i++)
		printf("%s\n", p[i]);

	for(i=0;i<c1;i++)
	{
	fputs(p[i],fp);
	fputs("\n",fp);
	}
	fclose(fp);











} 
