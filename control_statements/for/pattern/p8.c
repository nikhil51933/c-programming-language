/* a
   b c
   d e f
   g h i j    */

#include<stdio.h>
void main()
{
int i,j;
char ch;
scanf("%c",&ch);


for(i=0,ch;i<=5;i++)
{
for(j=0;j<=i;j++,ch++)
printf("%c ",ch);
printf("\n");


}


}
