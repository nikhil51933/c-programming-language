#include<stdio.h>
void main()
{
int i,j,row;
printf("enter rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
for(j=0;j<row-i;j++)
{
if(i%2==0)
printf("* ");
else
printf("%d ",j*2+1);
}
printf("\n");




}}
