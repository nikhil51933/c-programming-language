

#include<stdio.h>
#include<string.h>
union st
{
int rollno;
char name[20];
float marks;
}v;
void main()
{
v.rollno=10;
strcpy(v.name,"asdiyh");
v.marks=23.5;
printf("%d %s %f\n",v.rollno,v.name,v.marks);
printf("%lu %lu %lu\n",&v.rollno,&v.name,&v.marks);


}
