#include<stdio.h>
void main()
{
int i,j,row;
char ch;
printf("enter rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
for(j=0,ch='A';j<i+1;j++,ch++)
{
if(j%2==0)
printf("%c ",ch);
else
printf("* ");
}
printf("\n");




}}
