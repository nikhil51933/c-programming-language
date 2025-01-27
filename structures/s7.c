// how to acesses if struct memb is pointer.

#include<stdio.h> 
#include<stdlib.h>
void main()
{
struct st
{
int rollno;
char *name;
float marks;
};
/*v.rollno=10;
v.marks=23.5;
v.name="abc";
printf("%d %s %f\n",v.rollno,v.name,v.marks);
*/
struct st *p;
//p=&v;
p=malloc(sizeof(struct st));
p->name=malloc(20);
p->rollno=20;
p->marks=222.5;
p->name="fldsjn";
printf("%d %s %f\n",p->rollno,p->name,p->marks);



}

