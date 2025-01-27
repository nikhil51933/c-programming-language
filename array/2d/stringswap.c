//WAP to swap strings length wise in 2d array

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
		for(k=0;s[i][k];k++);
		for(j=i+1;j<5;j++)
		{
			for(l=0;s[j][l];l++);
			if(l<k)
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
