//allocate the dynamic memory for 1 stdent database and return the staerting adress

#include<stdio.h>
#include<stdlib.h>
struct st
{
int rollno;
char name[20];
float marks;
};
struct st * base(void);
void main()
{
struct st *p;
p=base();
p->rollno=10;
strcpy(p->name,"abcde");
p->marks=23.5;
printf("%d %s %f\n",p->rollno,p->name,p->marks);
}
struct st * base(void)
{
struct st *p=malloc(sizeof(struct st));
return p;
}
