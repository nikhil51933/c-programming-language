/*WAP to print pattern
  1
  ab
  123
  abcd    */

#include<stdio.h>
void main()
{
int i,j,row;
char ch;
printf("enter no.of rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
for(j=0,ch='a';j<i+1;j++,ch++)
{
if(i%2==0)
printf("%d",j+1);
else
printf("%c",ch);
}
printf("\n");
}



}
