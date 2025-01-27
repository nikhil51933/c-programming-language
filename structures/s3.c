

#include<stdio.h>
void main()
{
static struct one v;
{
int i=10;
char ch='a';
float f=23.5;
};
printf("%d %c %f\n",v.i,v.ch,v.f);
}
