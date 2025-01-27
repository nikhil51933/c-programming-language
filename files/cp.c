//WAP to design user defined copy command

#include<stdio.h>
void main(int argc,char **argv)
{
	FILE *sp,*dp;
	if(argc<3)
	{
		printf("usage:src dest...\n");
		return;
	}
	sp=fopen(argv[1],"r");
	dp=fopen(argv[2],"w");
	char ch;
	while((ch=fgetc(sp))!=-1)
		fputc(ch,dp);

}
