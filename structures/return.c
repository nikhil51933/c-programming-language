//how to return multiple tiypes of data in function.

#include<stdio.h>
#include<string.h>
struct st
{
int rollno;
char name[20];
float marks;
}v;
struct st print(void);
void main()
{
struct st p;
p=print();
printf("%d %s %f",p.rollno,p.name,p.marks);
}
struct st print(void)
{
struct st v;
v.rollno=1;
strcpy(v.name,"abcd");
v.marks=23.5;
return v;
}

/*#include<stdio.h>
struct st
{
int rollno;
char name[20];
float marks;
}v;
struct st print(int,char *,float);
void main()
{
struct st p;
int i;
char *n;
float f;
p=print(i,n,f)
printf("%d\n",p);
}
struct st print(int i,char *n,float f)
{
struct st e;
e.i=10;
e.n="abc";
e.f=33.5;
return e;
}*/
