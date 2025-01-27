/*WAP to print pattern 
            1
	   ab
	  123
	 abcd  
     	12345    */

#include<stdio.h>
void main()
{
int i,j,k,row;
char ch;
//printf("enter no.of to print\n");
//scanf("%d",&row);

for(i=0;i<7;i++)
{
for(j=0;j<6-i;j++)
printf(" ");

for(k=0,ch='a';k<1+i;k++,ch++)
{
if(i%2==0)
printf("%d",k+1);
else
printf("%c",ch);
}
printf("\n");
}

}
