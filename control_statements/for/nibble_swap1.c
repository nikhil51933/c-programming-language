//WAP for swapping of nibbles of a given character

#include<stdio.h>
void main()
{
//signed char ch=0xB5;
unsigned char ch=0xB5;
int i;
printf("before nibble shifting ch=%x\n",ch);
for(i=7;i>=0;i--)
{
printf("%d",ch>>i&1);
if(i%4==0)
printf(" ");
}

ch=ch>>4|ch<<4;

printf("\nafter nibble swapping ch=%x\n",ch);
for(i=7;i>=0;i--)
{
printf("%d",ch>>i&1);
if(i%4==0)
printf(" ");
}
printf("\n");

}
