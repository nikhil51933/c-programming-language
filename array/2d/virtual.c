//WAP to sort the strings virtually in alphabetical order.

#include<stdio.h>
#include<string.h>
void main()
{
	char s[5][20];
	printf("enter the strings\n");
	for(int i=0;i<5;i++)
		scanf("%s",s[i]);
	printf("\n");

	int i,j,k;
	for( i=0;i<5;i++)
		printf("%s\n",s[i]);
	printf("\n");

	char *p[5],*t;
	for(i=0;i<5;i++)
		p[i]=s[i];
	for(i=0;i<5-1;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(s[j],s[i])>0)
			{
				t=p[j];
				p[j]=p[i];
				p[i]=t;

			}

		}
	}

	for(i=0;i<5;i++)
		printf("%s\n",p[i]);
}
