

#include<stdio.h>
void main()
{
	int i;
	FILE *fp;
	fp=fopen("data","r");
	while((i=fgetc(fp))!=-1)
	{
		printf("%d-",i);
		printf("%c\n",i);
	}

}

