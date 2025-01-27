//WAP to swap strings alphabetical wise in 2d array

#include<stdio.h>
#include<string.h>
void swap(int **,int);
void main()
{
	char s[5][10],t[10];
	int i,j,k,l;
	printf("enter string\n");
	for(i=0;i<5;i++)
		scanf("%s",s[i]);
	printf("\n");

	for(i=0;i<5;i++)
		printf("%s\n",s[i]);
	printf("\n");

	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(s[i],s[j])>0)
			{
				strcpy(t,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],t);


			}



		}
	}

		for(i=0;i<5;i++)
			printf("%s\n",s[i]);

	}
