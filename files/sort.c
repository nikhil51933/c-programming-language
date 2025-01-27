//wap program to copy student database in a file to another file according to rollno,name and marks

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct st
{
	int rollno;
	char name[20];
	float marks;
}**p;
void main(int argc,char **argv)
{
	FILE *fp,*dp;
	fp=fopen(argv[1],"w");
	dp=fopen(argv[2],"w");

	int i,n,op,j;
	struct st *t;
	printf("enter no.of students datatbase to storee in a file\n");
	scanf("%d",&n);
	p=calloc(n,sizeof(struct st));

	for(i=0;i<n;i++)
		p[i]=malloc(sizeof(struct st));

	printf("enter student details\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]->rollno);
		scanf(" %s",p[i]->name);
		scanf(" %f",&p[i]->marks);
		fprintf(fp,"%d ",p[i]->rollno);
		fprintf(fp,"%s ",p[i]->name);
		fprintf(fp,"%f ",p[i]->marks);
		fprintf(fp,"\n");
	}

	for(i=0;i<n;i++)
		printf("%d %s %f\n",p[i]->rollno,p[i]->name,p[i]->marks);

	printf("enter an option to store the data in a file according to\n");
	printf("  1)rollno wise sorting\n  2)name wise sorting\n  3)marks wise sorting\n");
	scanf(" %d",&op);
	switch(op)
	{
		case 1:for(i=0;i<n;i++)
		       {
			       for(j=i+1;j<n;j++)
			       {
				       if((p[j]->rollno)<(p[i]->rollno))
				       {
					       t=p[j];
					       p[j]=p[i];
					       p[i]=t;
				       }
			       }
		       }
		       for(i=0;i<n;i++)
		       {
			       fprintf(dp,"%d ",p[i]->rollno);
			       fprintf(dp,"%s ",p[i]->name);
			       fprintf(dp,"%f ",p[i]->marks);
			       fprintf(dp,"\n");
		       }
		       break;
		case 2:
		       for(i=0;i<n;i++)
		       {
			       for(j=i+1;j<n;j++)
			       {
				       if((strcmp(p[j]->name,p[i]->name))<0)
				       {
					       t=p[j];
					       p[j]=p[i];
					       p[i]=t;
				       }
			       }
		       }
		       for(i=0;i<n;i++)
		       {
			       fprintf(dp,"%d ",p[i]->rollno);
			       fprintf(dp,"%s ",p[i]->name);
			       fprintf(dp,"%f ",p[i]->marks);
			       fprintf(dp,"\n");
		       }
		       break;

		case 3:for(i=0;i<n;i++)
		       {
			       for(j=i+1;j<n;j++)
			       {
				       if((p[j]->marks)<(p[i]->marks))
				       {
					       t=p[j];
					       p[j]=p[i];
					       p[i]=t;
				       }
			       }
		       }
		       for(i=0;i<n;i++)
		       {
			       fprintf(dp,"%d ",p[i]->rollno);
			       fprintf(dp,"%s ",p[i]->name);
			       fprintf(dp,"%f ",p[i]->marks);
			       fprintf(dp,"\n");
		       }
		       break;

		default :printf("invalid option\n");
	}
	printf("after sorting\n");
	for(i=0;i<n;i++)
		printf("%d %s %f\n",p[i]->rollno,p[i]->name,p[i]->marks);

}
