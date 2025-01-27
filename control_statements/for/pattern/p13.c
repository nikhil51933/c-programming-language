/*      a
       A B
      a b c
     A B C D
    a b c d e   */

#include<stdio.h>
void main()
{
int i,j,row,k;
char ch;
printf("enter no.of rows to print\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
	for(j=0;j<(row-1)-i;j++)
		printf(" ");

	if(i%2==0)
		ch='a';
	else
		ch='A';

	for(k=0,ch;k<1+i;k++,ch++)
		printf("%c ",ch);
	printf("\n");

}

}


