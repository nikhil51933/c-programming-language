
#include<stdio.h>
void main()
{
int i,j;

for(i=1;i<8;i++)
{
for(j=1;j<=i;j++)
printf("* ");
printf("\n");
}

for(i=8;i>1;i--)
{
for(j=1;j<=i;j++)
printf("* ");
printf("\n");
}
}
