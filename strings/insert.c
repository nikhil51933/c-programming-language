//WAP to insert a character in a givem string.

#include<stdio.h>
void main()
{
char s[20],ch;
int len,i,index;

printf("enter any string\n");
scanf("%s",s);
printf("s=%s\n",s);

printf("enter the character to insert\n");
scanf(" %c",&ch);

printf("enter the index value\n");
scanf(" %d",&index);

for(len=0;s[len];len++);

for(i=len+1;i>=index;i--)
s[i+1]=s[i];

s[index]=ch;

printf("s=%s\n",s);


}
