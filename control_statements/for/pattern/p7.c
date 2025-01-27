/* WAP to print pattern of  
  A
  a b
  A B C
  a b c d        */

#include<stdio.h>
void main()
{
int i,j,c;
char ch;



for(i=1,ch;i<=6;i++,ch++)
{


if(i%2==0)
ch='a';
else
ch='A';
for(j=1;j<=i;j++,ch++)
printf("%c ",ch);

printf("\n");



}




}
