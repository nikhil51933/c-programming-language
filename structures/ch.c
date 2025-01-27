#include<stdio.h>
int main()
{
int *p=malloc(2);
int i;
for(i=0;i<2;i++)
scanf("%d",&p[i]);
for(i=0;i<2;i++)
printf("%d ",p[i]);

p=realloc(p,5);

for(i=2;i<5;i++)
scanf("%d",&p[i]);
for(i=0;i<5;i++)
printf("%d ",p[i]);
}
