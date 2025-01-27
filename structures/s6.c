//WAP to store 5 students database

#include<stdio.h>
void main()
{
struct stu
{
int rollno;
char name[8];
float marks;

}v[5];
int i;
printf("enter 5 students database\n");
for(i=0;i<5;i++)
{
scanf("%d",&v[i].rollno);
scanf(" %s",v[i].name);
scanf(" %f",&v[i].marks);
}
printf("---------------------------\n");
printf("rollno  name   marks\n");
for(i=0;i<5;i++)
printf("%d       %s     %f\n",v[i].rollno,v[i].name,v[i].marks);
}
