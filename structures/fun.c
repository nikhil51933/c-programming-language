//structures using functions.

#include<stdio.h>
#include<stdlib.h>
struct st
{
	int rollno;
	char *name;
	float marks;

}v;
void print1(int,char *,float);
void print2(int,char *,float);
void print3(struct st);
void print4(struct st *);

void main()
{
	int rollno=1;
	char *name ="abc";
	float marks =23.5;
	print1(rollno,name,marks);
	printf("in main1:%d %s %f\n\n",rollno,name,marks);
	struct st v={2,"def",33.5};
	print2(v.rollno,v.name,v.marks);

	printf("in main2:%d %s %f\n",v.rollno,v.name,v.marks);
	print3(v);
	print4(&v);
}
void print1(int i,char *n,float f)
{
	printf("in print1:%d %s %f\n",i,n,f);
}

void print2(int i,char *n,float f)
{
	printf("in print2:%d %s %f\n",i,n,f);
}

void print3(struct st v)
{
	printf("in print3:%d %s %f\n",v.rollno,v.name,v.marks);
}

void print4(struct st *p)
{
	printf("in print4:%d %s %f\n",p->rollno,p->name,p->marks);
}
