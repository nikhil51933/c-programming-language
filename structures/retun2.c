//return type void 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct st
{
int rollno;
char name[20];
float marks;
};
void base(struct st **);
void main()
{
struct st *p;
base(&p);
p->rollno=10;
strcpy(p->name,"abcedef");
p->marks=23.5;
printf("%d %s %f\n",p->rollno,p->name,p->marks);
}

void base(struct st **k)
{
k=malloc(sizeof(struct st));

}
