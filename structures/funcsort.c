//using functions and switch case sort the roll,name,marks of students.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct st
{
	int rollno;
	char name[20];
	float marks;
}**p;
void roll_sort(struct st **,int);
void name_sort(struct st **,int);
void marks_sort(struct st **,int);
void main()
{
	int n,i,op;
	printf("enter no.of student database\n");
	scanf("%d",&n);
	p=calloc(n,sizeof(struct st));
	for(i=0;i<n;i++)
		p[i]=malloc(sizeof(struct st));

	for(i=0;i<n;i++)
	{
		printf("enter student-%d rollno,name & marks\n",i+1);
		scanf("%d",&p[i]->rollno);
		scanf(" %s",p[i]->name);
		scanf("  %f",&p[i]->marks);
	}
	printf("before sorting\n");
	for(i=0;i<n;i++)
		printf("%d %s %f\n",p[i]->rollno,p[i]->name,p[i]->marks);

	printf("select an option for sorting\n 1)rollno wise sorting\n 2)name wise sorting\n 3)marks wise sorting\n");
	scanf(" %d",&op);
	switch(op)
	{
		case 1: roll_sort(p,n);break;
		case 2: name_sort(p,n);break;
		case 3: marks_sort(p,n);break;
		default : printf("invald option\n");

	}
	printf("select sorting order\n 1)asceding order\n 2)descending order\n");
	scanf(" %d",&op);

	printf("after sorting\n");
	switch(op)
	{
		case 1: for(i=0;i<n;i++)
				printf("%d %s %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
			break;
		case 2: for(i=n-1;i>=0;i--)
				printf("%d %s %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
			break;
		default :printf("invalid option\n"); return;
	}
}
void roll_sort(struct st **p,int n)
{
	int i,j;
	struct st *t;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((p[j]->rollno)<(p[i]->rollno))
			{
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
}

void marks_sort(struct st **p,int n)
{
	int i,j;
	struct st *t;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((p[j]->marks)<(p[i]->marks))
			{
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
}

void name_sort(struct st **p,int n)
{
	int i,j;
	struct st *t;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((strcmp(p[j]->name,p[i]->name))<0)
			{
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
}







