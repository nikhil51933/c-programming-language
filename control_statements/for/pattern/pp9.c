#include<stdio.h>
void main()
{
int i,j,k,row;
char ch;
printf("enter rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
for(k=0,ch='A';k<row-1-i;k++,ch++)
printf("  ");
for(j=0;j<i+1;j++,ch++)
{
if(i%2==0)
printf("%c ",ch);
else
printf("%d ",j+1);
}
printf("\n");




}}
