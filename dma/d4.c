//WAP to allocate dynamic memory for n no.of strings

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,n1;
	char **p;
	printf("enter no.of strings and size of each string\n");
	scanf("%d%d",&n,&n1);
	p=malloc(sizeof(char *)*n);
	printf("enter strings\n");
	for(i=0;i<n;i++)
	{
		p[i]=malloc(sizeof(char)*n1);
		//p[i]=malloc(1*n1);
		scanf("%s",p[i]);
	}
	printf("------------------------------\n");
	for(i=0;i<n;i++)
		printf("%s\n",p[i]);
} 
