//self referencial structure


#include<stdio.h>
void main()
{
struct st
{
int rollno;
char name[20];
float marks;
struct st *p;
//struct st a;
}v;
printf("%lu\n",v.p);

}
