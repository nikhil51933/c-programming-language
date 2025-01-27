

#include<stdio.h>
struct one
{
int i;
char ch;
float f;
double d;
};
void main()
{
struct one v={10,'g',23.5},v1;
printf("%d %c %f\n",v.i,v.ch,v.f);
printf("%lu %lu %lu\n",&v.i,&v.ch,&v.f);
v1=v;
printf("%d %c %f\n",v1.i,v1.ch,v1.f);
printf("%lu %lu %lu\n",&v1.i,&v1.ch,&v1.f);

/*if(v==v1)
printf("same\n");
else
printf("difffernt\n"); */


}
