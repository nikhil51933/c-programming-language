//WAP to prove that you are working on a little enidian.

#include<stdio.h>
void main()
{
int num=10;
char *p;
p=(char *)&num;

if(*p==10)
printf("little enidian\n");
else
printf("big enidian\n");


}
