//WAP for swapping the nibbles of a given character

#include<stdio.h>
void main()
{
char ch,ch1;
int i,j,m,n;
printf("enter any character\n");
scanf("%c",&ch);
ch1=ch;


printf("before nibble swaping ch is: %c = %d\n",ch,ch);
for(i=7;i>=0;i--  )
printf("%d",ch>>i&1);

for(i=0,j=4; i<4 ; i++,j++)
{
m=ch>>i&1;
n=ch>>j&1;
if(m!=n)
{
ch=ch^1<<i;
ch=ch^1<<j;
}
}

printf("\nafter nibble swaping ch is: %c = %d\n",ch,ch);
for(i=7;i>=0;i--  )
printf("%d",ch>>i&1);

//////// easy expression for nibble swapping is given below /////

ch1=ch1>>4|ch1<<4;
printf("\nch1=%c = %d\n",ch1,ch1);
for(i=7;i>=0;i--)
printf("%d",ch1>>i&1);
printf("\n");




}
