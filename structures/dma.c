//WAP to allocate DMA for 5 student database and after if user want to increase/decrease the memory reallocate the memory.

#include<stdio.h>
#include<stdlib.h>
struct st
{
	int rollno;
	char name[20];
	float marks;

};
void main()
{
	struct st **p;
	int n,i,n1,op;
	printf("enter no.of students database\n");
	scanf("%d",&n);
	p=calloc(n,sizeof(struct st));
	for(i=0;i<n;i++)
		p[i]=malloc(sizeof(struct st));
	for(i=0;i<n;i++)
	{
		printf("enter student-%d rollno name & marks\n",i);
		scanf("%d",&p[i]->rollno);
		scanf(" %s",p[i]->name);
		scanf(" %f",&p[i]->marks);
	}
	for(i=0;i<n;i++)
	printf("%d %s %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
printf("enter an option\n  1)increase the memory\n  2)decrease the memory\n");
scanf(" %d",&op);
printf("how much wanto increase/decrease\n");
scanf(" %d",&n1);
switch(op)
{
case 1: p=realloc(p,sizeof(struct st)*(n+n1));
	printf("enter reallocated student details\n");

	for(i=n;i<n+n1;i++)
	{
		p[i]=malloc(sizeof(struct st));
		printf("enter student-%d rollno name & marks\n",i);
		scanf("%d",&p[i]->rollno);
		scanf(" %s",p[i]->name);
		scanf(" %f",&p[i]->marks);
	}
	for(i=0;i<n+n1;i++)
	printf("%d %s %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
	break;

case 2: p=realloc(p,sizeof(struct st)*(n-n1));
	/*for(i=n;i<n+n1;i++)
	{
		printf("enter student-%d rollno name & marks\n",i);
		scanf("%d",&p[i]->rollno);
		scanf(" %s",p[i]->name);
		scanf(" %f",&p[i]->marks);
	}*/
	for(i=0;i<n-n1;i++)
	printf("%d %s %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
	break;

default: printf("invalid choice\n"); 
	       free(p); 
	       p=0; 
	       return;
}


free(p);
p=0;

}

