//WAP to allocate dynamic memeory for one integer.


#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p;
char *q;
p=(int*)malloc(sizeof(int));
q=malloc(1);
printf("enter int number and char\n");
scanf("%d %c",p,q);
printf("%d %c\n",*p,*q);
}









