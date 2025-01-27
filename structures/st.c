//WAP to store 5 student database and sort according to rollno,name,marks.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct st
{
	int rollno;
	char name[20];
	float marks;
};
void main()
{
	struct st **p,*t;
	int i,j,n,op;
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
	printf("----------------------\nbefore sorting\nrollno name marks\n");
	for(i=0;i<n;i++)
		printf("%d     %s  %f\n",p[i]->rollno,p[i]->name,p[i]->marks);



	printf("select an option\n  1)rollno wise sorting\n  2)name wise sorting\n  3)marks wise sorting\n");
	scanf(" %d",&op);
	switch(op)
	{
		case 1 :for(i=0;i<n;i++)
			  {
				  for(j=i+i;j<n;j++)
				  {
					  if((p[j]->rollno)<(p[i]->rollno))
					  {
						  t=p[i];
						  p[i]=p[j];
						  p[j]=t;
					  }

				  }

			  }
			  break;
		case 2: for(i=0;i<n;i++)
			  {
				  for(j=i+1;j<n;j++)
				  {
					  if(strcmp(p[j]->name,p[i]->name)<0)
					  {
						  t=p[i];
						  p[i]=p[j];
						  p[j]=t;
					  }
				  }
			  }
			  break;

		case 3:for(i=0;i<n;i++)
			 {
				 for(j=i+1;j<n;j++)
				 {
					 if(p[j]->marks<p[i]->marks)
					 {
						 t=p[i];
						 p[i]=p[j];
						 p[j]=t;
					 }
				 }

			 }
		break;
	}
	printf("select order of sorting\n  1)ascending order\n  2)descending order\n ");
scanf(" %d",&op);

	printf("after sorting\nrollno name marks\n");
switch(op)
{
case 1:
	for(i=0;i<n;i++)
		printf("%d      %s   %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
break;
case 2:for(i=n-1;i>=0;i--)
		printf("%d      %s   %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
break;

}
free(p);
p=0;
}
