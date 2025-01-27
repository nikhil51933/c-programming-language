//WAP to allocate dynamic memoy to 5 integers.

#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p[5],i,*q;
printf("enter numbers\n");
/*for(i=0;i<5;i++)
{
p[i]=malloc(4);
scanf("%d",p[i]);
printf("%d\n",*p[i]);
}*/
q=malloc(5*4);
for(i=0;i<5;i++)
{
scanf("%d",&q[i]);
printf("%d\n",q[i]);

}
}
