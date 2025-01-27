#include<stdio.h>
void main()
{
int i,j,k,row;
char ch;
printf("enter rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
for(k=0;k<row-1-i;k++)
printf("  ");
for(j=0,ch='A';j<i+1;j++)
{
if(i%2==0)
printf("# ");
else
printf("%c ",ch++);
}
printf("\n");




}}
