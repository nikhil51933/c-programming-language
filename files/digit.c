//wap to copy the words having digits into another file.

#include<stdio.h>
void main(int argc,char **argv)
{
	FILE *sp,*dp;
	sp=fopen(argv[1],"r");
	dp=fopen(argv[2],"w");

	char s[30];
	int i;
	while(fscanf(sp,"%s",s)!=EOF)
	{
		for(i=0;s[i];i++)
		{
			if(s[i]>='0' && s[i]<='9')
			{
				fprintf(dp,"%s\n",s);
				break;
			}
		}

	}
}


