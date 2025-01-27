//wap to design user defined cp command which can copy to multiple destinations

#include<stdio.h>
void main(int argc,char **argv)
{
	FILE *sp,*dp;
	sp=fopen(argv[1],"r");
	int i,j;
	char ch;
	for(i=2;i<argc;i++)
	{
			dp=fopen(argv[i],"w");
		while((ch=fgetc(sp))!=-1)
		{
			fputc(ch,dp);
		}
		rewind(sp);
	}
}
