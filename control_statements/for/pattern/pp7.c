#include<stdio.h>
void main()
{
int i,j,row,k;
char ch;
printf("enter rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
for(j=0,k=1,ch='A';j<row-i;j++)
{
if(j%2==0)
printf("%c ",ch++);
else
printf("%d ",k++);
}
printf("\n");




}}
