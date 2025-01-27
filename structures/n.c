//wap to store 5 student database with roll name marks and dob,doj

#include<stdio.h>
#include<stdlib.h>
struct date
{
int day,month,year;
};
struct st
{
int rollno;
char name[20];
float marks;
struct date dob,doj;
};
void main()
{
struct st **p;
int i,n;
printf("enter no.of stduent datbase\n");
scanf("%d",&n);
p=calloc(n,sizeof(struct st));
for(i=0;i<n;i++)
p[i]=malloc(sizeof(struct st));

for(i=0;i<n;i++)
{
printf("enter student-%d rollno name marks dob &doj\n",i+1);
scanf("%d",&p[i]->rollno);
scanf(" %s",p[i]->name);
scanf(" %f",&p[i]->marks);
scanf(" %d%d%d",&p[i]->dob.day,&p[i]->dob.month,&p[i]->dob.year);
scanf(" %d%d%d",&p[i]->doj.day,&p[i]->doj.month,&p[i]->doj.year);
}

printf("--------------------------------------------------------\n");
printf("roll name mark dob doj\n");
for(i=0;i<n;i++)
printf(" %d  %s  %f %d:%d:%d  %d:%d:%d:\n",p[i]->rollno,p[i]->name,p[i]->marks,p[i]->dob.day,p[i]->dob.month,p[i]->dob.year,p[i]->doj.day,p[i]->doj.month,p[i]->doj.year);

}
