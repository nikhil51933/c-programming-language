//wap to store 5 students database print acording to 

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
	struct st **p;
	int n,i,op,l,j;
	char c[20];
	printf("enter no.of stduents database\n");
	scanf("%d",&n);
	p=calloc(n,sizeof(struct st));
	for(i=0;i<n;i++)
		p[i]=malloc(sizeof(struct st));

	for(i=0;i<n;i++)
	{
		printf("enter student-%d rollno name & marks\n",i+1);
		scanf("%d",&p[i]->rollno);
		scanf(" %s",p[i]->name);
		scanf(" %f",&p[i]->marks);
	}
	printf("before\n");
	for(i=0;i<n;i++)
		printf("%d  %s  %f\n",p[i]->rollno,p[i]->name,p[i]->marks);

	printf("select an option\n 1)if rollno is even print that student details\n");
	printf(" 2)if name first letter is ovel print that student's name marks\n 3)if rollno is power of 2 print that student's name only\n 4)if name is having first and last leter ovel print those stduent rollno and marks\n 5)if the marks are b/w 60-90 print those student rollno\n 6)print those rollno name who receive highest mars\n");
	scanf(" %d",&op);
	switch(op)
	{
		case 1:for(i=0;i<n;i++)
		       {
			       if((p[i]->rollno)%2==0)
				       printf("%d %s %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
		       }
		       break;

		case 2:for(i=0;i<n;i++)
		       {
				//if(p[i]->name[0]=='a'||p[i]->name[0]=='e')
			       strcpy(c,p[i]->name);
			       if(c[0]=='a'|| c[0]=='e'||c[0]=='i'||c[0]=='o'||c[0]=='u'||c[0]=='A'||c[0]=='E'||c[0]=='I'||c[0]=='O'||c[0]=='U')
				       printf("%s %f\n",p[i]->name,p[i]->marks);
		       }
		       break;

		case 3: for(i=0;i<n;i++)
			{
				if((p[i]->rollno)&((p[i]->rollno)-1)==0)
					printf("%s\n",p[i]->name);
			}
			break;

		case 4:for(i=0;i<n;i++)
		       {
			       strcpy(c,p[i]->name);
			       if(c[0]=='a'|| c[0]=='e'||c[0]=='i'||c[0]=='o'||c[0]=='u'||c[0]=='A'||c[0]=='E'||c[0]=='I'||c[0]=='O'||c[0]=='U')
			       {
				       for(l=0;c[l];l++);
				       if(c[l-1]=='a'||c[l-1]=='e'||c[l-1]=='i'||c[l-1]=='o'||c[l-1]=='u'||c[l-1]=='A'||c[l-1]=='E'||c[l-1]=='I'||c[l-1]=='O'||c[l-1]=='U')
					       printf("%d %f\n",p[i]->rollno,p[i]->marks);
			       }
		       }
		       break;

		case 5:for(i=0;i<n;i++)
		       {
			       if(p[i]->marks>60 && p[i]->marks<90)
				       printf("%d\n",p[i]->rollno);
		       }
		       break;

		case 6:for(i=1,l=p[0]->marks;i<n;i++)
		       {
			       if((p[i]->marks)>l)
			       {
				       l=p[i]->marks;
				       j=i;
			       }
		       }
		       printf("%d %f\n",p[j]->rollno,p[j]->marks);
	}
	free(p);
	p=0;
}
