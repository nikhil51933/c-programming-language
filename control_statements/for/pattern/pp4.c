#include<stdio.h>
void main()
{
int i,j,k,row;
printf("enter rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
for(j=0;j<i;j++)
printf(" ");
for(k=i;k<row;k++)
printf("%d",k*2+1);
printf("\n");




}}
